#include <mpi.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    MPI_Comm grid_comm;
    int dims[2];
    int periodic[2];
    int reorder = 1, q = 5, ndims = 2, maxdims = 2;
    int coordinates[2];
    int my_grid_rank;
    int coords[2];
    MPI_Comm row_comm;

    dims[0] = dims[1] = q;
    periodic[0] = periodic[1] = 1;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_grid_rank); // Додано виклик для визначення рангу кожного процесу

    MPI_Cart_create(MPI_COMM_WORLD, ndims, dims, periodic, reorder, &grid_comm);
    MPI_Cart_coords(grid_comm, my_grid_rank, ndims, coordinates); // Додано виклик для отримання декартових координат

    printf("Process rank %d has coordinates (%d, %d)\n", my_grid_rank, coordinates[0], coordinates[1]);

    // Додано операції циклічного зміщення
    int right_neighbor, left_neighbor;
    MPI_Cart_shift(grid_comm, 0, 1, &left_neighbor, &right_neighbor); // Зміщення вгору
    printf("Process rank %d, left neighbor: %d, right neighbor: %d\n", my_grid_rank, left_neighbor, right_neighbor);

    // Додано операції лінійного зміщення
    int down_neighbor, up_neighbor;
    MPI_Cart_shift(grid_comm, 1, 1, &up_neighbor, &down_neighbor); // Зміщення вправо
    printf("Process rank %d, up neighbor: %d, down neighbor: %d\n", my_grid_rank, up_neighbor, down_neighbor);

    MPI_Finalize();
    return 0;
}