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

ctype.h系列字符函数（例如isspace()和isalpha()）为创建基于分类字符的判断表达式提供了便利的工具。

switch语句使您能够从一系列以整数值作为标签的语句中进行选择。如果紧跟在switch关键字后的判断条件的整数值与某标签相匹配，执行就定位到该标签定位的语句。然后执行继续完成紧跟在该标签语句后面的语句。知道遇到一个break语句。

break、continue和got是跳转语句，导致程序流程跳转到程序的其他位置。break语句导致程序跳转到紧跟在包含它的循环或switch末尾的下一条语句。continue语句导致程序跳过包含它的循环的剩余部分，开始下一循环周期。

### 复习题
1、确定哪个表达式为true，哪个为false。  
```
a.100 > 3 && 'a' > 'c'  
b.100 > 3 || 'a' > 'c'  
c.!(100>3)  
```
<details>
     <summary>答：</summary>

	
 </details>


2、构造一个表达式来表示下列条件：  
```
a.number等于或大于90，但是小于100
b.ch不是字符q也不是字符k
c.number界于1到9之间（包括1和9），但是不等于5
d.number不在1到9之间
```
<details>
     <summary>答：</summary>

	
 </details>

3、下面程序中的关系表达式过于复杂，并有些错误，请简化并改正它。
 ```
 #include <stdio.h> 
 1 int main(void)
 2 {
 3     int weight, height; /* weight以磅为单位，height以英寸为单位 */
 4 
 5     scanf("%d, weight, height);
 6     if(weight < 100 && height > 64)
 7         if(height >= 72)
 8             printf("You are very tall for your weight.\n");
 9         else if(height < 72 && > 64)
10             printf("You are tall for your weight.\n");
11     else if(weight > 300 && !(weight <= 300)
12             && height < 48)
13         if(!(height >= 48))
14             printf(" You are quite short for your weight.\n");
15     else
16         printf("Your weight is ideal.\n");
17 
18     return 0;
19 }
```
<details>
     <summary>答：</summary>

	
 </details>

4、下列每个表达式的数值是多少？
```
a.5 > 2
b.3 + 4 > 2 && 3 < 2
c.x >= y || y > x
d.d = 5 + (6 > 2)
e.'X' > 'T' ? 10 : 5
f. x > y ? y > x : x > y
```
<details>
     <summary>答：</summary>

	
 </details>

5、下列程序将打印出什么？
```
#include <stdio.h>
int main(void)
{
    int num;
    for(num = 1; num <= 11; num++)
    {
        if(num % 3 == 0)
            putchar('$');
        else
            putchar('*');
            putchar('#');
        putchar('%');
    }
    putchar('\n');
    return 0;
}
```
<details>
     <summary>答：</summary>

	
 </details>

6、下列程序将打印出什么？
```
#include <stdio.h>
int main(void)
{
    int i = 0;
    while(i < 3)
    {
        switch(i++)
        {
            case 0: printf("fat");
            case 1: printf("hat");
            case 2: printf("cat");
            default: printf("Oh no!");
        }
        putchar('\n');
    }
    return 0;
}
```
<details>
     <summary>答：</summary>

	
 </details>

7、下列程序有什么错误？
```
 1 #include <stdio.h>
 2 int main(void)
 3 {
 4     char ch;
 5     int lc = 0;    /*统计小写字符
 6     int uc = 0;    /*统计大写字符
 7     int oc = 0;    /*统计其他字符
 8 
 9     while((ch = getchar()) != '#')
10     {
11         if('a' <= ch >= 'z')
12             lc++;
13         else if(!(ch < 'A') || !(ch > 'Z')
14             uc++;
15         oc++;
16     }
17     printf("%d lowercase, %d uppercase, %d other, lc, uc, oc");
18     return 0;
19 }
```
<details>
     <summary>答：</summary>

	
 </details>

8、下列程序将打印出什么？
```
/* retire.c*/
#include <stdio.h>
int main(void)
{
    int age = 20;

    while(age++ <= 65)
    {
        if((age % 20) == 0)      /* age能被20整除吗？*/
            printf("You are %d. Here is a raise.\n", age);
        if(age = 65)
            printf("You are %d. Here is your gold watch.\n", age);
    }
    return 0;
}
```
<details>
     <summary>答：</summary>

	
 </details>

9、当给定下述输入时，下列程序将打印出什么？
```
q
c
g
b
#include <stdio.h>
int main(void)
{
    char ch;

    while((ch = getchar()) != '#')
    {
        if(ch == '\n')
            continue;
        printf("Step 1\n");
        if(ch == 'c')
            continue;
        else if(ch == 'b')
            break;
        else if(ch == 'g')
            goto laststep;
        printf("Step 2\n");
        laststep: printf("Step 3\n");
    }
    printf("Done!\n");
    return 0;
}
```
<details>
     <summary>答：</summary>

	
 </details>

10、重写题目9的程序，以使它表现相同的行为但不使用continue或goto。

<details>
     <summary>答：</summary>

	
 </details>

### 编程练习

1. 编写一个程序。该程序读取输入直到遇到#字符，然后报告读取的空格数目、读取的换行符数目以及读取的所有其他字符数目。  
[7001代码](C_Primer_Plus_code/7001/main.c)

2. 编写一个程序，该程序读取输入直到遇到#字符。使程序打印每个输入的字符以及它的十进制ASCII码。每行打印8个字符，编码对。建议：利用字符计数和模运算符(%)在每8个循环周期时打印一个换行符。  
[7002代码](C_Primer_Plus_code/7002/main.c)

3. 编写一个程序。该程序读取整数，直到输入0。输入终止后，程序应该报告输入的偶数（不包括0）总个数、偶数的平均值，输入的奇数总个数以及奇数的平均值。  
[7003代码](C_Primer_Plus_code/7003/main.c)

4. 利用if else语句编写程序读取输入，直到#。用一个感叹号代替每个句号，将原有的每个感叹号用两个感叹号代替，最后报告进行了多少次替代。  
[7004代码](C_Primer_Plus_code/7004/main.c)

5. 用switch重做练习3。  
[7005代码](C_Primer_Plus_code/7005/main.c)

6. 编写一个程序读取输入，直到#，并报告序列ei出现的次数。  
此程序必须要记住前一个字符和当前的字符。用诸如“Receive your eieio award.”的输入测试它。  
[7006代码](C_Primer_Plus_code/7006/main.c)


7. 编写程序，要求输入一周中的工作小时数，然后打印工资总额、税金以及净工资。作如下假设：  
a．基本工资等级=10.00美元//J,时  
b．加班（超过40小时）=1.5倍的时间  
c．税率 前300美元为15%  
下一个150美元为20%  
余下的为25%  
用#define定义常量，不必关心本例是否符合当前的税法。  
[7007代码](C_Primer_Plus_code/7007/main.c)

8. 习7中的假设a，使程序提供一个选择工资等级的菜单。用switch选择工资等级。程序运行的开头应该像这样：  
Enter the number corresponding to the desired pay rate or action:  
  1． $8.75/hr &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;           2． $9.33/hr  
  3． $lO.OO/hr  &emsp;&emsp;&emsp;&emsp;&emsp;          4． $11.20/hr  
  5． quit  
  如果选择l到4．那么程序应该请求输入工作小时数。程序应该一直循环运行，直到输入5。如果输入l到5以外的选项，那么程序应该提醒用户合适的选项是哪些，然后再循环。用#define为各种工资等级和税率定义常量。  
  [7008代码](C_Primer_Plus_code/7008/main.c)

9. 一个程序，接受一个整数输入，然后显示所有小于或等于该数的素数。  
[7009代码](C_Primer_Plus_code/7009/main.c)

10. 1988年United States Federal Tax Schedule是近期最基本的。它分为4类，每类有两个等级。下面是其摘要；美元数为应征税的收入。  

	|种类 |税金 |
	|----------|---|
	|单身 |17·850美元按15%，超出部分按28% |
	|户主  |23，900美元按15%，超出部分按28%|
	|婚，共有 |29，750美元按15%，超出部分按28% |
	|婚，离异 |14，875美元按l5%，超出部分按28% |  

    例如，有20 000美元应征税收入的单身雇佣劳动者应缴税金0.15×17 850美元+0.28×（20 000美元-17 850美元）。编写一个程序，让用户指定税金种类和应征

    税收入，然后计算税金。使用循环以便用户可以多次输入。  
   [7010代码](C_Primer_Plus_code/7010/main.c)

11. ABC Mail Order Grocery朝鲜蓟的售价是1.25美元/磅，甜菜的售价是0.65美元/磅，胡萝卜的售价是0.89美元/磅。在添加运输费用之前，他们为100美元的订单提供5%的打折优惠。对5磅或以下的定单收取3.50美元的运输和装卸费用；超过5磅而不足20磅的定单收取1O.OO美元的运输和装卸费用：加磅或以上的运输，在8美元基础上每磅加收0.1美元。编写程序，在循环中使用switch语句，以便对输入a的响应是让用户输入所需的朝鲜蓟磅数，b为甜菜的磅数，c为胡萝卜的磅数，而q允许用户退出订购过程。然后程序计算总费用、折扣和运输费用（如果有运输费的话），以及总数。随后程序应该显示所有的购买信息：每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，如果有的话加上运输费用，以及所有费用的总数。  
[7011代码](C_Primer_Plus_code/7011/main.c)
