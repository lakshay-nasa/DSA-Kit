# ADT - Abstract Data Types
## We know about Data Types 

1. Primitive Data Types - int, float, double, char etc
2. Derived Data Types - Arrays, Pointers, Structures etc.
2. User-Defined Data Types - Structure, Union, Enumeration, classes etc

Abstraction is the idea of separating what something is from how it works, by separating interface from implementation

Now, 
    
    ADT are like user defined data types which defines operations on values using functions without specifying what is there inside the function and how the operations are performed.

    Abstract Data type (ADT) is a type (or class) for objects whose behavior is defined by a set of values and a set of operations.
    ADT
<br>

Some Examples of ADT are ---->

* List ADT
* Stack ADT
* Queue ADT

An abstract data type is an abstraction of a data structure that provides only the interface to which the data structure must adhere. The interface does not give any specific details about something should be implemented or in what programming language.

Note -> 

    This is called as an Abstract because this is only a concept. Different programming language has different ways of implementing it thats why its better to understand the concept.

    Abstract data types are the entities that are definitions of data and operations but do not have implementation details. In this case, we know the data that we are storing and the operations that can be performed on the data, but we don't know about the implementation details. The reason for not having implementation details is that every programming language has a different implementation strategy for example; a C data structure is implemented using structures while a C++ data structure is implemented using objects and classes.


# ADT in C vs C++

Note --> 

* Unlike C, C++ allows the data and functions of an ADT to be defined together. It also enables an ADT to prevent access to internal implementation details, as well as to guarantee that an object is appropriately initialized when it is created.

* We use the word class to refer to C++ ADTs and use the class keyword to define them.


<br>
<br>

<a href="https://eecs280staff.github.io/notes/07_ADTs_in_C.html">Abstract Data Types in C</a>

<a href="https://eecs280staff.github.io/notes/08_ADTs_in_C%2B%2B.html">Abstract Data Types in C++</a>
