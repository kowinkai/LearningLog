## 第7章 C控制语句：分支和跳转

### 在本章中您将学习下列内容：
- 关键字：

  if、else、switch、continue、break、case、default、goto
- 运算符：

  &&  ||  ?:
- 函数：

  getchar（）、putchar（）、ctype.h
- 怎样使用if和if else语句以及如何嵌套使用它们。
- 使用逻辑运算符将关系表达式组合为更加复杂的判断表达式。
- C的条件运算符。
- switch语句。
- breda、continue和goto跳转。
- 使用C的字符I/O函数：getchar（）和putchar（）。
- 由ctype.h头文件提供的字符分析函数系列。

### 程序清单：
[701colddays](C_Primer_Plus_code/701colddays/main.c)  
[702cypher1](C_Primer_Plus_code//main.c)  
[703cypher2](C_Primer_Plus_code/703cypher2/main.c)  
[704electric](C_Primer_Plus_code/704electric/main.c)  
[705divisors](C_Primer_Plus_code/705divisors/main.c)  
[706chcount](C_Primer_Plus_code/706chcount/main.c)  
[707wordcnt](C_Primer_Plus_code/707wordcnt/main.c)  
[708paint](C_Primer_Plus_code/708paint/main.c)  
[709skippart](C_Primer_Plus_code/709skippart/main.c)  
[710break](C_Primer_Plus_code/710break/main.c)  
[711animals](C_Primer_Plus_code/711animals/main.c)  
[712vowels](C_Primer_Plus_code/712vowels/main.c)  


### 知识点：

- 分支语句(branching statement)又叫选择语句(selection statement)

  形式1：
  ```
	if(expression)
		statement
  ```  

  如果expression求得的值为真（非零），就执行statement；否则，跳过该语句。和while循环一样，statement即可以是单个语句也可以是一个代码块（术语上称为复合语句）。这种结构和while语句很相似。主要的区别在于在if语句中，判断和执行（如果可能的话）仅有一次，而在while循环中，判断和执行可以重复多次。通常，expression是一个关系表达式。

  形式2：
  ```
	if（expression）
		statement1
	else
		statement2
  ```

  如果expression为真（非零），就执行statement1；如果expression为假或零，则执行跟在else后的那一条语句（statement2）。语句可以是简单的或复合的。C不要求缩排，但这是标准的风格。缩排使语句依赖于判断而执行这一事实显得一目了然。

  形式3：
  ```
	if
	else if
	else if
	...
  ```

  if else语句是另一个if else语句的else语句部分。我们称第二个if else语句被嵌套（nested）在第一个里面。C99标准要求编译器最少支持127层嵌套。else与和它最接近的一个if相配合。

  从技术角度讲，if else语句作为单个语句，所以不需要括上花括号。外部if也是单个语句，所以也不需要花括号。然而，当语句很长时，花括号使人更容易清楚发生了什么，并且当后来将其他语句加到if或循环中时它们提供了保护。

- C的逻辑运算符

|运算符|含义|
|:----:|----|
|&&|与|
|\|\||或|
| ！|非|

  C99标准为逻辑运算符增加了可供选择的拼写法。它们在iso646.h头文件里定义。如果包含了这个头文件，就可以用and代替&&，用or代替||，用not代替！。

  - （练习&&时间）== 完美；

  很多程序员都愿意使用圆括号，尽管这并不是必须的。这样的话，即使您不能完全记住逻辑运算符的优先级，表达式的含义仍然是很清楚的。

  C保证逻辑表达式是从左至右求值的。&&和||运算符是序列的分界点，因此在程序从一个操作数前进到下一个操作数之前，所有的副作用都会生效。而且，C保证一旦发现某个元素使表达式总体无效，求值将立刻停止。很多其他语言都没有这个特性。

- 条件运算符 ?:	
  C提供了一种简写方式来表示if else语句的一种形式。这被称为条件表达式，并使用条件运算符"?:"。这是一个有三个操作数的分两部分的运算符。

  `x = (y < 0) ? -y: y;`

  `expression1 ? expression2: expression3`

  如果expression1为真（非零），整个条件表达式的值和expression2的值相同。如果expression1为假（零），整个条件表达式的值等于expression3的值。

- continue语句	
该语句可以用于三种循环形式。当运行到该语句时，它将导致剩余的迭代部分被忽略，开始下一次迭代。如果continue语句处于嵌套结构中，那么它仅仅影响包含它的最里层的结构。continue的另一个用处是作为占位符。

- break语句	
循环中的break语句导致程序终止包含它的循环，并进行程序的下一阶段。如果break语句位于嵌套循环里，它只影响包含它的最里层的循环。break语句实质上是switch语句的附属物。

- 多重选择：switch和break	
使用条件运算符合if else结构可以很容易地编写从两个选择中进行选择的程序。然而，有时程序需要从多个选择中选择一个。可以利用if else if...else来这样做，但多数情况下，使用C的switch语句更加方便。	
程序扫描标签（label）列表（case‘a’， case'b', 如此等等），直到搜索到一个与该值相匹配的标签。然后程序跳出到那一行。要是没有相匹配的标签怎么办？如果有被标记为default：的标签行，程序就跳到该行；否则，程序继续处理跟在switch语句之后的语句。

  break语句有什么作用呢？它导致程序脱离switch语句，跳到switch之后的下一条语句。如果没有break语句，从相匹配的标签到switch末尾的每一条语句都将被执行。

  break语句用于循环和switch中，而continue仅用于循环。但是，如果switch语句位于一个循环中，则可以把continue用于switch语句的一部分。在这种情况下，就像在其他的循环中一样，continue导致程序跳过该循环的其余部分，其中包括switch的其余部分。

  什么时候该使用swtich，而什么时候又该使用if else结构呢？通常是没有选择的。如果选择是基于求一个浮点型变量或表达式的值，就不能使用switch。如果变量必须落入某个范围，也不能很方便地使用swith。然而，如果可以使用switch，程序通常运行的稍微快点，而且占据较少的代码。

- goto语句  
`	goto label;`将跳到代码有该标签的位置：`label: statement`	

  Kernighan和Ritchie认为goto语句“非常容易被滥用”，并且建议“要谨慎使用，或者根本不用”。

  跳出循环：用break代替。实际上，break和continue是goto的特殊形式。使用它们的好处是它们的名字表明它们意味着什么；并且，因为它们不使用标签，所以不存在放错标签位置的潜在危险。

  但有一种goto的使用被许多C专业人员所容忍：在出现故障时从一组嵌套的多重循环中跳出（单条break仅仅跳出最里层的循环）。

- 专门为面向字符I/O而设计的一对C函数：getchar（）和putchar（）  
`ch = getchar ();` 与右边的语句有同样的效果：`scanf("%c", &ch);`	
`putchar(ch);`与右边的语句有同样的效果：`printf("%c", ch);`	

- ctype.h系列字符函数  

|函数名|为如下参数时，返回值为真|
|-----|----------------------|
|isalnum()|字母数字（字母或数字）|
|isalpha()|字母|
|isblank()|一个标准的空白字符（空格、水平制表符或者换行符）或者任何其他本地化指定为空白符的字符|
|iscntrl()|控制符，例如Ctrl+B|
|isdigit()|阿拉伯数字|
|isgraph()|除空格符之外的所有可打印字符|
|islower()|小写字母|
|isprint()|可打印字符|
|ispunct()|标点符号（除空格和字母数字外的可打印字符）|
|isspace()|空白字符：空格、换行、走纸、回车、垂直制表符、水平制表符、或可能是其他本地化定义的字符|
|isupper()|大写字母|
|isxdigit()|十六进制数字字符|
|tolower()|如果参数是大写字符，返回相应的小写字符；否则，返回原始参数|
|toupper()|如果参数是小写字符，返回相应的大写字符；否则，返回原始参数|

### 总结
本章给出了相当多的要回顾的主题，那么让我们来看看。if语句利用判断条件来控制程序是否执行紧跟在判断条件后的一个简单语句或代码块。如果判断表达式为非零值，执行语句；如果为零值，则不执行语句。if else语句使您能够从两个选项中进行选择。如果判断条件为非零值，就执行else之前的语句。如果判断表达式的结果为零值，执行紧跟在else之后的语句。通过紧跟在else语句之后使用另一个if语句，可以建立在一系列可供选择的事物中进行选择的结构。

判断条件通常是一个关系表达式，也就是用一个关系运算符构成的表达式，例如<或者==。利用C的逻辑运算符，可以组合多个关系表达式以创建更复杂的判断。

使用条件运算符（?:）可以产生一个表达式，这样的表达式在多数情况下比if else语句提供更为简洁的二中选一。

ctype.h系列字符函数（例如isspace（）和isalpha（））为创建基于分类字符的判断表达式提供了便利的工具。

switch语句使您能够从一系列以整数值作为标签的语句中进行选择。如果紧跟在switch关键字后的判断条件的整数值与某标签相匹配，执行就定位到该标签定位的语句。然后执行继续完成紧跟在该标签语句后面的语句。知道遇到一个break语句。

break、continue和got是跳转语句，导致程序流程跳转到程序的其他位置。break语句导致程序跳转到紧跟在包含它的循环或switch末尾的下一条语句。continue语句导致程序跳过包含它的循环的剩余部分，开始下一循环周期。

### 复习题

### 编程练习
