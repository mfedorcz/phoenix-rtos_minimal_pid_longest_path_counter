# phoenix-rtos_minimal_pid_longest_path_counter
Program to wywołanie systemowe, systemu phoenix-rtos, które rekurencyjnie  przeszukuje czerwono-czarne drzewo binarne żeby znaleźć proces o identyfikatorze mniejszym od określonego parametru posiadający najdłuższą ścieżkę do procesu bez dzieci. Przykładowo dla drzewa procesów stworzonego poprzez wywołanie funkcji fork() w pętli 3 razy:

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
  
  Dla minimalnego PID 3, wywołanie powinno zwrócić: PID=3, path_length=1.
  
  W repozytorium znajdują się niezbędne pliki, które można przerzucić do katalogu czystego systemu. Po zbudowaniu obrazu i jego uruchomieniu wywołanie powinno działać. 
  Plik testy.pdf ilustruje kilka przypadków działania wywołania.
