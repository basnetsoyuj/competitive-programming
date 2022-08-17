import re
import itertools

AND = ("\u2227", "^", "&&", "&", "AND")
OR = ("\u2228", "v", "V", "||", "|", "OR")
NOT = ("\u00AC", "~", "!", "NOT")
BICONDITIONAL = ("\u2194", "\u21D4", "<->", "<=>", "iff", "IFF")
IMPLICATION = ("\u2192", "\u21D2", "->", "=>", "implies", "IMPLIES")
dict_ = {True: 'T', False: 'F'}


def generate_truth_table(input_str):
    SPACING = len(input_str) + 2
    if SPACING % 2 == 0:
        SPACING += 1

    SPACING2 = 5

    truth_table = ""

    # preprocessing the input string
    i = f' {input_str} '.replace("[", "(").replace("]", ")")

    # for AND
    for symbol in AND:
        i = i.replace(symbol, " and ")

    # for OR
    for symbol in OR:
        i = i.replace(symbol, " or ")

    # for NOT
    for symbol in NOT:
        i = i.replace(symbol, " not ")

    # for BICONDITIONAL (should come before IMPLICATION)
    for symbol in BICONDITIONAL:
        # BICONDITIONAL and == are logically equivalent
        i = i.replace(symbol, " == ")

    # for IMPLICATION
    for symbol in IMPLICATION:
        # p -> q is logically equivalent to (~p v q)
        i = i.replace(symbol, " ^ 1 or ")

    variables = []

    # find a single alphabet(uppercase or lowercase) surrounded by non alpha character
    # and replace it like %(<var>)s so that we can format it later                                                                                                                              " not ").replace("[", "(").replace("]", ")").replace('<->', ' == ').replace('↔', ' == ').replace('->', ' ^ 1 or ').replace('=>', ' ^ 1 or ').replace('\u2192', ' ^ 1 or ')
    i = re.sub("([^\w])([A-Za-z])([^\w])", r"\1%(\2)s\3", i)

    # find all variables and add them to variables
    for v in re.findall('[^\w]([A-Za-z])[^\w]', i):
        if v not in variables:
            variables.append(v)

    variables.sort()

    line = '-' * ((SPACING2 + 1) * len(variables) + ((SPACING + 1)) + 1) + "\n"

    # write header to truth table string
    truth_table += line + "|"
    for val in variables:
        truth_table += val.center(SPACING2) + "|"
    truth_table += input_str.center(SPACING) + "|\n"
    truth_table += line

    # generate all possible combinations of truth values for all variables
    for val in itertools.product(*[[True, False] for _ in range(len(variables))]):
        # create dict mapping variables to their truth values
        values = dict(zip(variables, val))

        # calculate the truth value of the input string using string formatting & eval
        output = eval(i % values)

        # write the truth value to the truth table string
        truth_table += "|"
        for data in val:
            truth_table += dict_[data].center(SPACING2) + "|"
        truth_table += dict_[output].center(SPACING) + "|\n"

    truth_table += line

    return truth_table


if __name__ == "__main__":
    print(generate_truth_table("((A -> B) ∧ (B -> C)) -> (A -> C)"))
