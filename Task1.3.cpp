//#include <mpi.h>
//#include <stdio.h>
//#include <string.h> // Додано для використання функції strcpy
//
//int main(int argc, char* argv[]) {
//    char data[24];
//    int myrank;
//    MPI_Status status;
//
//    MPI_Init(&argc, &argv);
//    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
//
//    if (myrank == 0) {
//        strcpy(data, "Hi, Parallel Programmer!");
//        MPI_Bcast(&data, 24, MPI_CHAR, 0, MPI_COMM_WORLD); // Виклик процедури широкомовної розсилки
//        printf("send: %s\n", data);
//    }
//    else {
//        MPI_Bcast(&data, 24, MPI_CHAR, 0, MPI_COMM_WORLD); // Виклик процедури широкомовної розсилки
//        printf("received: %s\n", data);
//    }
//
//    MPI_Finalize();
//    return 0;
//}