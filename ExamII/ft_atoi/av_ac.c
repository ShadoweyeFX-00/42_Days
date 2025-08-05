#include <unistd.h>

int     main(int argc, char **argv)
{
        int x = 0;

        if (argc != 2)
        {
                write(1, "\n", 1);
                return 0;
        }
         while (argv[1][x])
         {
		 if (argv[1][x] == 'a')
		 {
			write(1, "a\n", 2);
			return 0;
		 }
                 x++;
   
	 }
	 write(1, "\n", 1);
}
