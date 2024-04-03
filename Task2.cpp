//#include <mpi.h>
//#include <stdio.h>
//#include <stdlib.h> // Додано для використання функції malloc
//
//int main(int argc, char* argv[]) {
//    int myrank, data = 2002, count, TAG = 0;
//    MPI_Status status;
//
//    MPI_Init(&argc, &argv);
//    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
//
//    if (myrank == 0) {
//        MPI_Send(&data, 1, MPI_INT, 2, TAG, MPI_COMM_WORLD);
//    }
//    else if (myrank == 1) {
//        int message[3] = { 0, 1, 2 }; // Переміщено декларацію message сюди, щоб вона була видимою
//        MPI_Send(&message, 3, MPI_INT, 2, TAG, MPI_COMM_WORLD);
//    }
//    else {
//        int source; // Перемістили декларацію source сюди, оскільки вона використовується тільки в цьому блоку else
//        MPI_Recv(&source, 1, MPI_INT, MPI_ANY_SOURCE, TAG, MPI_COMM_WORLD, &status);
//
//        MPI_Get_count(&status, MPI_INT, &count);
//
//        int* buf = (int*)malloc(count * sizeof(int)); // Змінили тип buf на простий масив int, оскільки не потрібен двомірний масив
//        MPI_Recv(buf, count, MPI_INT, source, TAG, MPI_COMM_WORLD, &status);
//
//        for (int i = 0; i < count; i++) {
//            printf("received: %d\n", buf[i]);
//        }
//        free(buf); // Звільнили пам'ять, що була виділена за допомогою malloc
//    }
//
//    MPI_Finalize();
//    return 0;
//}