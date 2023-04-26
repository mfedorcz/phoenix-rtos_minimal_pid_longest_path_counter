# phoenix-rtos_minimal_pid_longest_path_counter
Program to wywołanie systemowe, systemu phoenix-rtos, które rekurencyjnie  przeszukuje czerwono-czarne drzewo binarne żeby znaleźć proces o identyfikatorze mniejszym od określonego parametru posiadający najdłuższą ścieżkę do procesu bez dzieci. Przykładowo dla drzewa procesów stworzonego poprzez wywołanie funkcji fork() w pętli 3 razy:


```
               P0
             / | \
            /  |  \
           /   |   \
          /    |    \
         /     |     \
        P1    P4      P2
       / \             \
      /  P5              P6
     P3
    /
   P7
```

Dla minimalnego PID 3, wywołanie powinno zwrócić: PID=3, path_length=1.
  
  W repozytorium znajdują się niezbędne pliki z programem testowym, które można przerzucić do katalogu czystego systemu. Po zbudowaniu obrazu i jego uruchomieniu wywołanie powinno działać.
  Program testowy tworzy "FORK_QT" "pokoleń procesów", przez co można zmieniać wynik testu.
  Plik testy.pdf ilustruje kilka przypadków działania wywołania.

<details><summary>[ENG]</summary>
<p>
The program is a system call to the phoenix-rtos system that recursively searches the red/black binary tree to find a process with an id less than a specified parameter with the longest path to a process without children. For example, for a process tree created by calling the fork() function in a loop 3 times:

```
               P0
             / | \
            /  |  \
           /   |   \
          /    |    \
         /     |     \
        P1    P4      P2
       / \             \
      /  P5              P6
     P3
    /
   P7
```
For a minimum PID of 3, the call should return: PID=3, path_length=1.
  
  The repository contains the necessary files with the test program, which can be moved to the clean system directory. After building the image and running it, the call should work.
  The test program creates "FORK_QT" "generations of processes", through which you can change the test result.
  The file tests.pdf illustrates several cases of the call's operation.

</p>
</details>
