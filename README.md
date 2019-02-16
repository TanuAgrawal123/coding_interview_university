# Technical Interview Preparation
## A daily log of what I learned. I'm following the path to learn everything from [jwasham/coding-interview-university](https://github.com/jwasham/coding-interview-university) repository.
<a name="toc"></a>
### Table of Contents 
|Day|Focus|Day|Focus|
|:---:|:-----:|:---:|:-----:|
|[Day 1](#day-1) **06/01/19**| Algorithmic complexity / Big-O / Asymptotic analysis |[Day 2](#day-2) **07/01/19**|Algorithmic complexity / Big-O / Asymptotic analysis|
|[Day 3](#day-3) **08/01/19**|Algorithmic complexity / Big-O / Asymptotic analysis and array data structure |[Day 4](#day-4) **10/01/19**|Array data structure |
|[Day 5](#day-5) **12/01/19**|Array Data structure |[Day 6](#day-4) **16/01/19**|linked list Data structure |
|[Day 7](#day-7) **06/02/19**|Linked list data structure |[Day 8](#day-8) **07/02/19** |Linked list data structure |
|[Day 9](#day-9) **08/02/19**|Linked list, stack, queue data structure |[Day 10](#day-10) **14/02/19** |queue data structure |
|[Day 11](#day-11) **16/02/19**|Hashing |[Day 12](#day-12) **17/02/19** |  |

<a name="day-1"></a>
### Day 1: January 06, 2019
**Today's Focus**: Algorithmic complexity / Big-O / Asymptotic analysis

**Details**:

 - Read/Watched 
    - [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
    - [Big O Notations (general quick tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
    - [Big O Notation (and Omega and Theta) - best mathematical explanation (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
    - Skiena [video](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - Skiena [slides](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
    - [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/)
    
**Revisited?** 
- [ ] Reading/Video Tutorial
- [ ] Anki flash cards

**Help Needed**
- N/A

**Link to work**:
 [N/A](N/A)

[Table of Contents](#toc)

<a name="day-2"></a>
### Day 2: January 07, 2019
**Today's Focus**: Algorithmic complexity / Big-O / Asymptotic analysis

**Details**:

 - Read/Watched 
     - [UC Berkeley Big O (video)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
    - [UC Berkeley Big Omega (video)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
    - [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
    
**Revisited?** 
- [ ] Reading/Video Tutorial(on Amortized anlysis and potential function)
- [ ] Anki flash cards

**Help Needed**
- N/A

**Link to work**:
 [N/A](N/A)

[Table of Contents](#toc)

<a name="day-3"></a>
### Day 3: January 08, 2019
**Today's Focus**: Algorithmic complexity / Big-O / Asymptotic analysis and array data structure. 

**Details**:

 - Read/Watched 
      TopCoder (includes recurrence relations and master theorem):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
    - [Cheat sheet](http://bigocheatsheet.com/)

     *Array*

    - [UC Berkeley CS61B - Linear and Multi-Dim Arrays (video)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (Start watching from 15m 32s)
    
**Revisited?** 
- [ ] Reading/Video Tutorial(on Amortized anlysis and potential function)
- [ ] Anki flash cards
- [ ] read cheat sheet.

**Help Needed**
- N/A

**Link to work**:
 [N/A](N/A)

[Table of Contents](#toc)


<a name="day-4"></a>
### Day 4: January 10, 2019
**Today's Focus**: Array data structure. 

**Details**:

 - Read/Watched

      Implement an automatically resizing vector.
    - [ ] Description:
        - [Basic Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [Multi-dim (video)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Dynamic Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [Resizing arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)

       Additional content:

        - Vector Class in C++ STP.
        
          - Push_back() Add value to the end 
          - pop_back()  Remove element from end (capacity remain fixed)
          - size() give total no of element
          - clear() Remove all element
          - add (index) give value at current index
          - Front() give ist index value
          - Back() give last value.

    
**Revisited?** 
- [ ] Reading/Video Tutorial
- [ ] Anki flash cards
- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [N/A](N/A)

[Table of Contents](#toc)


<a name="day-5"></a>
### Day 5: January 12, 2019
**Today's Focus**: Array data structure
**Details**:

 - Read/Watched

      Implement an automatically resizing vector.
    - [ ] Description:
        - [ ] size() - number of items
        - [ ] capacity() - number of items it can hold
        - [ ] is_empty()
        - [ ] at(index) - returns item at given index, blows up if index out of bounds
        - [ ] push(item)
        - [ ] insert(index, item) - inserts item at index, shifts that index's value and trailing elements to the right
        - [ ] pop() - remove from end, return value
        - [ ] delete(index) - delete item at index, shifting all trailing elements left
        - [ ] remove(item) - looks for value and removes index holding it (even if in multiple places)
        - [ ] find(item) - looks for value and returns first index with that value, -1 if not found
        - [ ] resize(new_capacity) // private function
            - when you reach capacity, resize to double the size
            - when popping an item, if size is 1/4 of capacity, resize to half
    - Book
      - Data Structures and Algorithms in Python [Goodrich, Tamassia & Goldwasser]
        - Topic:
              - The Python Interpreter 
              - Preview of a Python Program
              - Identiﬁers, Objects, and the Assignment Statement  
              - Creating and Using Objects 
              - Python’s Built-In Classes 
              - Compound Expressions and Operator Precedence

        - Page No.: 1-17


    
**Revisited?** 
- [ ] Reading/Video Tutorial
- [ ] Anki flash cards
- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [N/A](N/A)

[Table of Contents](#toc)

<a name="day-6"></a>
### Day 6: January 16, 2019

**Today's Focus**:Linked list data structure

**Details**:

 - Read/Watched

      - [ ] Description:
        - [ ] [CS 61B - Linked Lists 1 (video)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B - Linked Lists 2 (video)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)

      - Book
      - Data Structures and Algorithms in Python [Goodrich, Tamassia & Goldwasser]
        - Topic:
              - Conditionals 
              - loops
              - Information Passing 
              - Python’s Built-In Functions 
              
        - Page No.: 18-28  
    
**Revisited?** 
- [ ] Reading/Video Tutorial
- [ ] Anki flash cards
- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [N/A](N/A)

[Table of Contents](#toc)

<a name="day-7"></a>
### Day 7: February 06, 2019

**Today's Focus**:Linked list data structure

**Details**:

 - Read/Watched

      - [ ] Description:
        - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - not the whole video, just portions about Node struct and memory allocation.
        - [ ] Linked List vs Arrays:
         - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/
           learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
         - [In The Real World Linked Lists Vs Arrays (video)](
           https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
        - [ ] Gotcha: you need pointer to pointer knowledge:
          (for when you pass a pointer to a function that may change the address where that pointer points)
          This page is just to get a grasp on ptr to ptr. I don't recommend this list traversal style. Readability and maintainability suffer due to cleverness.
          - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html)
        - [ ] implement:
         - [ ] size() - returns number of data elements in list
         - [ ] empty() - bool returns true if empty
         - [ ] value_at(index) - returns the value of the nth item (starting at 0 for first)
         - [ ] push_front(value) - adds an item to the front of the list
         - [ ] pop_front() - remove front item and return its value   
         - [ ] display() - to displaty the item   
      
**Revisited?** 
- [ ] Reading/Video Tutorial

- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [here](https://github.com/TanuAgrawal123/coding_interview_university/blob/master/coding%20practice/linkedlist.c)

[Table of Contents](#toc)

<a name="day-8"></a>
### Day 8: February 07, 2019

**Today's Focus**:Linked list data structure

**Details**:

 - Read/Watched

      - [ ] Description:
        - [ ] implement:
         - [ ] push_back(value) - adds an item at the end
         - [ ] pop_back() - removes end item and returns its value
         - [ ] front() - get value of front item
         - [ ] back() - get value of end item
         - [ ] insert(index, value) - insert value at index, so current item at that index is pointed to by new item at index
         - [ ] erase(index) - removes node at given index
         - [ ] value_at_end(n) - returns the value of the node at nth position from the end of the list
         - [ ] reverse() - reverses the list
         - [ ] removes(value) - removes the first item in the list with this value   
      
**Revisited?** 
- [ ] Reading/Video Tutorial

- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [here](https://github.com/TanuAgrawal123/coding_interview_university/blob/master/coding%20practice/linkedlist.c)

[Table of Contents](#toc)

<a name="day-9"></a>
### Day 9: February 08, 2019

**Today's Focus**:Linked list,  stack and queue data structure

**Details**:

 - Read/Watched

     [ ] Doubly-linked List
       - [Description (video)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)

     ### stack
      - [ ] [Stacks (video)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
      - [ ] [Using Stacks Last-In First-Out (video)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)

     ### queue
     - [ ] [Using Queues First-In First-Out(video)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
     - [ ] [Queue (video)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
     - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
     - [ ] [Priority Queues (video)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)

      
**Revisited?** 
- [ ] Reading/Video Tutorial

- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [N/A](#)

[Table of Contents](#toc)


[Table of Contents](#toc)

<a name="day-10"></a>
### Day 10: February 14, 2019

**Today's Focus**: queue data structure

**Details**:

 - Read/Watched
      - [ ] Implement using linked-list, with tail pointer:
        - enqueue(value) - adds value at position at tail
        - dequeue() - returns value and removes least recently added element (front)
        - empty()

      - [ ] Implement using fixed-sized array:
        - enqueue(value) - adds item at end of available storage
        - dequeue() - returns value and removes least recently added element
        - empty()
        - full()
**Revisited?** 
- [ ] Reading/Video Tutorial

- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [here](https://github.com/TanuAgrawal123/coding_interview_university/tree/master/coding%20practice)

[Table of Contents](#toc)



<a name="day-11"></a>
### Day 11: February 16, 2019

**Today's Focus**: Hashing 

**Details**:

 Hash table
    - [ ] Videos:
        - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
**Revisited?** 
- [ ] Reading/Video Tutorial

- [ ] Self made notes

**Help Needed**
- N/A

**Link to work**:
 [N/A](#)

[Table of Contents](#toc)



