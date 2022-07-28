'''
Here, P(N, k) = (N/k)**k

Implicit differentiation yields the following:

dP/dk = P(ln(N/k) - 1)

P does not have a definite minima, so the critical point can only be the maxima

Then, using dP/dk = 0:

-> 0 = P(ln(N/k) - 1)
-> ln(N/k) = 1
-> k = N/e

Since k is an integer, we round both up and down to check for maxima
(The critical point is close to discrete maxima as the function is continuous)

---

To check terminating/non-terminating decimal, we can check whether the denominator of fraction has only 2 and/or 5 as the factors.
'''

from fractions import Fraction
from math import ceil, floor, e, log

# calculating (N/k) ** k is slow, so instead use log
def P(N, k): return k * log(N / k)

# function to check if fraction is terminating or not
def is_terminating(n):
    if n == 1:
        return True
    elif n % 2 == 0:
        return is_terminating(n/2)
    elif n % 5 == 0:
        return is_terminating(n/5)
    return False


def solver():
    counter = 0

    for i in range(5, 10001):
        k = i/e
        up, down = ceil(k), floor(k)
        up_frac, down_frac = P(i, up), P(i, down)

        # get denominator of the largest fraction
        if up_frac > down_frac:
            denominator = Fraction(i, up).denominator
        else:
            denominator = Fraction(i, down).denominator

        # check if it is terminating
        if is_terminating(denominator):
            counter -= i
        else:
            counter += i

    return counter


print(solver())  # answer: 48861552
