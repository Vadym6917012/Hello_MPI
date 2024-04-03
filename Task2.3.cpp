//#include <mpi.h>
//#include <stdio.h>
//
//int main(int argc, char* argv[]) {
//    int myrank;
//    int root = 0;
//    int count = 1;
//    float a, b;
//    int n;
//
//    MPI_Init(&argc, &argv);
//    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
//
//    if (myrank == 0) {
//        printf("Enter a, b, n\n");
//        scanf("%f %f %i", &a, &b, &n);
//
//        // Виклик процедури широкомовної розсилки для передачі значень a, b, n
//        MPI_Bcast(&a, count, MPI_FLOAT, root, MPI_COMM_WORLD);
//        MPI_Bcast(&b, count, MPI_FLOAT, root, MPI_COMM_WORLD);
//        MPI_Bcast(&n, count, MPI_INT, root, MPI_COMM_WORLD);
//    }
//    else {
//        // Виклик процедури широкомовної розсилки для отримання значень a, b, n
//        MPI_Bcast(&a, count, MPI_FLOAT, root, MPI_COMM_WORLD);
//        MPI_Bcast(&b, count, MPI_FLOAT, root, MPI_COMM_WORLD);
//        MPI_Bcast(&n, count, MPI_INT, root, MPI_COMM_WORLD);
//    }
//
//    printf("%i Process got %f %f %i\n", myrank, a, b, n);
//
//    MPI_Finalize();
//    return 0;
//}