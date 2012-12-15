#include "parser.h"

void parse(char command_buffer[])
{
	int i, j;
	i = 0;
	j = 0;

	if (command_buffer[0] == MASSIVE_SEPARATE_CHAR) /*Is a valid command, i.e., starts with MASSIVE_SEPARATE_CHAR ?*/
	{
		for (i=1; i<MASSIVE_COMMAND_SIZE; i++)
		{
			/*Parse valid command id*/
			if (command_buffer[i] != MASSIVE_SEPARATE_CHAR)
			{
				command_id[j] = command_buffer[i];
				j++;
			}else{
				command_id[j] = '\0';
				break;
			}
		}

		/*Parse valid command params*/
		j = 0;
		for (i=i+1; i<MASSIVE_COMMAND_SIZE; i++)
		{
			command_params[j] = command_buffer[i];
			j++;
		}
		command_id[j] = '\0';
	}
}