# lab1实验报告
学号 201907040102 姓名 李平凡
## 实验要求
本次实验需要各位同学根据cminux-f的词法补全lexical_analyer.l文件，完成词法分析器，能够输出识别出的token，type ,line(刚出现的行数)，pos_start(该行开始位置)，pos_end(结束的位置,不包含)。
## 实验难点
正则表达式书写，理解flex的使用过程，yylex（）的运行也就是它的输入和输出，正则表达式识别顺序，如何检测和测试代码实验正确性
## 实验设计
首先需要清楚本实验需要识别的是哪些类型，根据lexical_analyzer.h文件，发现需要识别5类记号，但是某一类中包括的记号又有很多，比如IDENTIFIER，我们还需要明白我们得识别出这些token（符号）对应的type也就是
int类型的数字。pos_start和pos_end可以理解为将代码放入txt文本中光标指向的位置，
此外我们还需要知道一件事，根据自己写的test.l测试文件发现，yylex（）是一个词法分析例程，具体来讲就是会根据你的正则表达式来进行匹配，比如如果说你开始之前定义了一个关于blank的正则表达式，也就是“ ”，那么你使用一次yylex（）
在你的终端输入一个空格，他就会识别，但是如果你没有关于空格的正则表达式，当你的yylex只调用一次，你后面定义的正则表达式的识别就不会识别出来，所以我们就需要一个循环一直不停的去识别，这也就是为什么我们需要识别空格和error，如果
我们没有识别空格的能力，他就会遇到一个空格停一下，pos_start和pos_end也不会指向正确的位置，同时error也是必要的，也是为了保证pos_start和pos_end指向正确的位置，同时识别出无法识别的（实验没有要求的）token。同时还有一点，yylex是有返回值的，如果是一个无法识别的值（正则表达式未定义的值）它的返回值是0，如果是定义的正则表达式，返回的值可以通过自己在{}中填写return，否则返回值仍然是0。


## 实验结果验证
请提供部分自己的测试样例
## 实验反馈