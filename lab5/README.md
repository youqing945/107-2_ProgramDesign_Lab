# lab5

## T or F (Slide 09)
1. Base-class constructors are not inherited by derived classes.<br/>
*True.* (p.17)

2. An is-a relationship is implemented via composition.<br/>
*False.* (p.6)<br/>
The is-a relationship represents inheritance. By contrast, the has-a relationship represents composition.

3. A Student class has an is-a relationship with the Faculty and  Course classes.<br/>
*False.* (p.6)<br/>
Students compose a faculty and a student and course classes have nothing in the same type, so it should be a has-a relationship.

4. Private members of a private base class are inaccessible to the derived class.<br/>
*True.* (p.21)<br/>
A derived class still can change the values of private base class members, but only through non-private member functions provided in the base class and inherited into the derived class.

5. A base class’s protected members can be accessed in the base-class definition, in derived-class definitions and in friend of the base class and its derived classes.<br/>
*True.* (p.22, p.23)


## Inheritance Hierarchy
![](https://i.imgur.com/EXBZ9cE.jpg)
