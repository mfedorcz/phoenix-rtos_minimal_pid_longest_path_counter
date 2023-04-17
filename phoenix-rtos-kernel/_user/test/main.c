#include <stdio.h>
#include <unistd.h>
#include </home/phoenix-lab2/libphoenix/include/sys/lab2.h>

int main(void)
{
	for(int i = 0; i < 4; ++i)
	{
		if( fork() > 0)
		{
			sleep(5);
			return 0;
		}
	}
	pid_t pid_anws = -1;
	int pathLength = 0;
	int minPID = 40;
	pathLength = lab2(& pid_anws, minPID);
	if(pathLength == -1){
		printf("ERROR: Brak procesów o PID mniejszym od podanego.");
	}else{
		printf("Proces majacy najdluzsza sciezke potomkow prowadzaca z procesu o PID >= %d to:\nPID procesu: %d\ndlugosc sciezki: %d\n", minPID, (int)pid_anws, pathLength);
	}
	return 0;
}
