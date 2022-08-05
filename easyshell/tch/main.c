#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
/*
  Simple implementation of linux touch function, with less functionality
*/
#include "tch.h"
/*
  --help -h for open this menu
  -a to modify access time to current
  -r if you want to rewrite current file
  -m to change the modification time

*/
void main(int argc, char **argv)
{
  int c;
  int digit_optind = 0;

  while (1)
  {
    int option_index = 0;
    static struct option tch_options[] = {
        {"help", 0, 0, 0},
    };

    c = getopt_long(argc, argv, "h", tch_options, &option_index);

    if (c == -1)
      break;

    switch (c)
    {
    case 0:
      printf("--help -h for open this menu\n \
      -a to modify access time to current\n \
      -r if you want to rewrite current file\n \
      -m to change the modification time\n");
      break;

    default:
      printf("?? error, while parsing arguments, if you receive this message please report this bug into email danluki0@yandex.ru");
    }
  }

  if (optind < argc)
  {
    printf("tch needs some arguments --help for help");
  }

  exit(EXIT_SUCCESS);
}