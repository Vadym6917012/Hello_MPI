//#include <mpi.h>
//#include <stdlib.h>
//#include "stdio.h"
//
//#define BUFFER_SIZE 10 // Розмір буфера
//
//int main(int argc, char* argv[]) {
//    int myrank;
//    MPI_Status status;
//    int data;
//
//    MPI_Init(&argc, &argv);
//    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
//
//    if (myrank == 0) {
//        // Прикріплюємо буфер для використання буферизованого обміну
//        int buffer[BUFFER_SIZE];
//        MPI_Buffer_attach(buffer, BUFFER_SIZE * sizeof(int));
//
//        // Відправка даних за допомогою буферизованого обміну
//        data = 42;
//        MPI_Bsend(&data, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
//        printf("Process 0 sent data: %d\n", data);
//
//        // Відключення буфера
//        int buffer_size;
//        MPI_Buffer_detach(buffer, &buffer_size);
//    }
//    else if (myrank == 1) {
//        // Прийом даних від процесу 0
//        MPI_Recv(&data, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &status);
//        printf("Process 1 received data: %d\n", data);
//    }
//
//    MPI_Finalize();
//    return 0;
//}