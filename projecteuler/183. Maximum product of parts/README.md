## Maximum product of parts

[https://projecteuler.net/problem=183](https://projecteuler.net/problem=183)

Let `N` be a positive integer and let `N` be split into k equal parts, `r = N/k`, so that `N = r + r + ... + r`.
Let `P` be the product of these parts, <code>P = r × r × ... × r = r<sup>k</sup></code>.

For example, if `11` is split into five equal parts, 1`1 = 2.2 + 2.2 + 2.2 + 2.2 + 2.2`, then `P = 2.25 = 51.53632`.

Let <code>M(N) = P<sub>max</sub></code> for a given value of `N`.

It turns out that the maximum for `N = 11` is found by splitting eleven into four equal parts which leads to <code>P<sub>max</sub> = (11/4)<sup>4</sup></code>; that is, `M(11) = 14641/256 = 57.19140625`, which is a terminating decimal.

However, for `N = 8` the maximum is achieved by splitting it into three equal parts, so `M(8) = 512/27`, which is a non-terminating decimal.

Let `D(N) = N` if `M(N)` is a non-terminating decimal and `D(N) = -N` if `M(N)` is a terminating decimal.

For example, `∑ D(N) for 5 ≤ N ≤ 100` is `2438`.

Find `∑ D(N)` for `5 ≤ N ≤ 10000`.