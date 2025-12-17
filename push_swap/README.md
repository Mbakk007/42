*This project has been created as part of the 42 curriculum by ael-bakk.*

# push_swap ⚡️

## Description 📋
push_swap is a 42 School project that challenges you to create a program capable of sorting a stack of integers using a limited set of operations. The goal is to produce the shortest possible list of moves to sort the stack.

The project focuses on algorithmic efficiency, stack manipulation, and understanding of sorting strategies. It includes handling both small and large sets of numbers while minimizing the number of operations.

## Features ✨
- Sorts a stack of integers using only allowed operations: `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.
- Handles small and large stacks efficiently.
- Works with randomly generated numbers for performance testing.
- Compatible with `checker` and `complexity` testers to verify correctness and move count.

## Screenshots 📸
**Example with 100 numbers:**  
![100 numbers test](https://i.imgur.com/AepP7OF.png)

**Example with 500 numbers:**  
![500 numbers test](https://i.imgur.com/DHuTIpE.png)

## Instructions 🛠️

Use `make` to compile both **libft** and **push_swap**:  
Provide a list of integers as arguments:

```sh
./push_swap 3 2 1
```

This will output the sequence of operations needed to sort the stack.  
You can use checker to verify correctness:

```sh
./push_swap 3 2 1 | ./checker 3 2 1
```

Or use the complexity tester to check efficiency with large sets:

```sh
./complexity 500 100 5500 ./checker_Mac
```

---

## Resources 🔗

- 42 push_swap subject  
- [42 Cursus Guide: push_swap](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap)
- [YouTube: Push Swap - Code, Learn & Discuss](https://www.youtube.com/watch?v=wRvipSG4Mmk)

GitHub: @Mbakk007  
42 Intra: ael-bakk  