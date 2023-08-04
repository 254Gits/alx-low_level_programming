int get_endianness(void)
{
	    unsigned int test = 1;
	        unsigned char *endian = (unsigned char *)&test;

		    if (*endian == 1)
			            return 1; // Little-endian
		        else
				        return 0; // Big-endian
}

