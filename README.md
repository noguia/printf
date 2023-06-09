<h1 align="center">
	

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQb18zkbUefxh6MAQSOfV_9X9i2HMUVvUloLQ&usqp=CAU)

# Write your own printf function.

Printf is a group project assignment of two, this project is aimed towards cloning the printf function in c programming, the project is in stages and each stage define and adds more features to our custom printf. The custom function will be named _printf. Following below are the names of the project contributors.
> 1. [IBRAHIM OUHLIMA](https://github.com/noguia)
> 2. [smaail -K](https://github.com/smaail-k)


 ## Notes

1. What is Variadic Functions?
	> Variadic function takes indefinite size arity and a variable number of arguments as a parameter. Situations that you do not know how many parameters pass the function.
2. what is ellipses (...)?
	> The ellipsis (...) is part of the C language and indicates that there are 0 or more optional arguments.
2. What is va_list?
	> a complete object type suitable for holding the information needed by the macros va_start, va_copy, va_arg, and va_end
3. What is va_start?
	> gets the address of the first argument.
4. What is va_arg?
	> dereference the block address and type cast it to the appropriate type. then goes to the next block of memory.
	> What is a "Type Descriptor"?
5. What is va_end?
	> performs cleanup for an ap object initialized by a call to va_start or va_copy

### Supported Format Specifiers
The printf function supports a wide range of format specifiers that allow for the formatting of output in a variety of ways. Here are the format specifiers that are supported in this implementation of printf:

`%d: for integers`<br>
`%s: for strings`<br>
`%f: for floats/doubles`<br>
`%b: for binary`<br>
`%u: for unsigned integers`<br>
`%o: for octal numbers`<br>
`%x: for hexadecimal numbers (lowercase)`<br>
`%X: for hexadecimal numbers (uppercase)`<br>
`%S: for non-printable characters`<br>
`%p: for pointer addresses`<br>
`%r: for reversed strings`<br>
`%R: for rot13'ed strings`<br>
 
 
### To create our custom printf function, We need to plan out how it will work. We can create a flowchart to help us visualize the logic of the function. Here is an example of a simple flowchart for printf:

- start -> read format string -> while format string not empty ->
- parse next format specifier -> output text before specifier ->
- if specifier is %d -> output decimal number
- if specifier is %s -> output string
- if specifier is %c -> output character
- if specifier is %% -> output %
- if specifier is unknown -> output error
- end loop -> output remaining text -> end

<p align="center">  
<img src ="https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png">
</p>
