# FAQ: Evaluation of Postfix Expression

**1. What are the different types of expressions?**
There are three: infix, prefix and postfix. They differ in where the operator is placed relative to its operands. Infix is the form we normally write, while prefix and postfix need no brackets because the order of operators already fixes the order of evaluation.

**2. Give an example of each type.**
- Infix: `a+b`, operator between the operands.
- Prefix: `+ab`, operator before the operands.
- Postfix: `ab+`, operator after the operands.

**3. Which data structure is used to evaluate an expression?**
A stack. While scanning a postfix expression from left to right, operands are pushed onto the stack. When an operator appears, the top two operands are popped, the operation is applied, and the result is pushed back. The single value left at the end is the answer.

**4. Convert the infix expression `a+b+c+d` to prefix.**
`+++abcd`. Addition is left-associative, so the expression groups as `((a+b)+c)+d`. The innermost `a+b` becomes `+ab`, then `+ +abc`, then `+ + +abcd`, which is written together as `+++abcd`.

**5. Convert the infix expression `a+b+c+d` to postfix.**
`ab+c+d+`. With the grouping `((a+b)+c)+d`, `a+b` becomes `ab+`, adding `c` gives `ab+c+`, and adding `d` gives `ab+c+d+`.
