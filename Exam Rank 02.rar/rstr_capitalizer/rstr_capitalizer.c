#include <unistd.h>


int foundspace(char c)
{
    return(c == ' ' || c == '\t' || c == '\0');
} 



int main(int argc, char **argv)
{
    if(argc == 1)
        write(1, "\n", 1);
    int x = 0;
    while(++x < argc)
    {
        int i = 0;
        while(argv[x][i])
        {
            if(argv[x][i] >= 'A' && argv[x][i] <= 'Z' && !foundspace(argv[x][i + 1]))
                argv[x][i] = argv[x][i] + 32;
            else if(argv[x][i] >= 'a' && argv[x][i] <= 'z' && foundspace(argv[x][i + 1]))
                argv[x][i] = argv[x][i] - 32;
            write(1, &argv[x][i], 1);
            i++;
        }
        
    }
}
