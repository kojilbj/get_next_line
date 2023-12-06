#include "./get_next_line_bonus.h"
#include <fcntl.h>

int	main(void)
{
	int fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(42));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(100));
}
