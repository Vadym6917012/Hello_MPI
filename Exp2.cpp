//#include "mpi.h"
//#include <stdio.h>
//#include <string.h>
//
//int main(int argc, char* argv[])
//{
//    int myrank, numprocs, count;
//    char message[23];
//    MPI_Status status;
//    int TAG = 0;
//
//    MPI_Init(&argc, &argv);
//    MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
//    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
//
//    if (myrank == 0)
//    {
//        strcpy(message, "Hi, Second Processor!");
//        MPI_Send(message, strlen(message), MPI_CHAR, myrank == 0 ? 1 : 0, TAG, MPI_COMM_WORLD);
//    }
//    else 
//    {
//        MPI_Recv(message, 23, MPI_CHAR, myrank == 0 ? 1 : 0, TAG, MPI_COMM_WORLD, &status);
//        printf("received: %s\n", message);
//    }
//
//    MPI_Finalize();
//    return 0;
//}