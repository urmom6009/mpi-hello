#include <mpi.h>
#include <cstdio>

int main(int argc, char** argv) {
	MPI_Init(&argc, &argv);

	int world_size = 0, world_rank = 0;
	char processor_name[MPI_MAX_PROCESSOR_NAME];
	int name_len = 0;

	MPI_Comm_size(MPI_COMM_WORLD, &world_size);
	MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
	MPI_Get_processor_name(processor_name, &name_len);

	std::printf("Hello from %s, rank %d of %d\n",
		processor_name, world_rank, world_size);

	MPI_Finalize();
	return 0;
}
