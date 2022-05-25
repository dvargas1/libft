#include "libft.h"

char to_lowermapi(unsigned int i, char a)
{
    (void)i;
    if (a >= 'A' && a <= 'Z')
        a += 32;
    return(a);
}

void to_upperteri(unsigned int i, char *a)
{
    (void)i;
    if (*a >= 'a' && *a <= 'z')
        *a = *a - 32;
}

int	main(void)
{
	// TESTE ISALPHA
	printf("\n---- isalpha ----\n");
	printf("5 ft_isalpha : %d, real : %d\n", ft_isalpha('5'), isalpha('5'));
	printf("p ft_isalpha : %d, real : %d\n", ft_isalpha('p'), isalpha('p'));
	printf("O ft_isalpha : %d, real : %d\n", ft_isalpha('O'), isalpha('O'));

	// ESTE IS DIGIT
	printf("\n---- isdigit ----\n");
	printf("5 ft_isdigit : %d, real : %d\n", ft_isdigit('5'), isdigit('5'));
	printf("p ft_isdigit : %d, real : %d\n", ft_isdigit('p'), isdigit('p'));
	printf("0 ft_isdigit : %d, real : %d\n", ft_isdigit('0'), isdigit('0'));

	// TESTE ISALNUM
	printf("\n---- isalnum ----\n");
	printf("5 ft_isalnum : %d, real : %d\n", ft_isalnum('5'), isalnum('5'));
	printf("p ft_isalnum : %d, real : %d\n", ft_isalnum('p'), isalnum('p'));
	printf("D ft_isalnum : %d, real : %d\n", ft_isalnum('D'), isalnum('D'));
	printf("! ft_isalnum : %d, real : %d\n", ft_isalnum('!'), isalnum('!'));

	// TESTE ESASCII
	printf("\n---- isascii ----\n");
	printf("5 ft_isascii : %d, real : %d\n", ft_isascii('5'), isascii('5'));
	printf("¡ ft_isascii : %d, real : %d\n", ft_isascii(0xA1), isascii(0xA1));

	// TESTE ISPRINT
	printf("\n---- isprint ----\n");
	printf("5 ft_isprint : %d, real : %d\n", ft_isprint('5'), isprint('5'));
	printf("¡ ft_isprint : %d, real : %d\n", ft_isprint(0xA1), isprint(0xA1));

	// TESTE STRLEN
	printf("\n---- strlen ----\n");
	printf("\"Olá Eu sou o Goku\" ft_strlen : %zu, real : %zu\n", ft_strlen("Olá Eu sou o Goku"), strlen("Olá Eu sou o Goku"));
	printf("\"\" ft_strlen : %zu, real : %zu\n", ft_strlen(""), strlen(""));

	// TESTE MEMSET 
	printf("\n---- memset ----\n");
	char str_real[50];
	strcpy(str_real, "Oi 42");
	memset(str_real, '-', 20);
	char str_test[50];
	strcpy(str_test, "Oi 42");
	ft_memset(str_test, '-', 20);
	printf("\"Oi 42\" memset ('-', 20) : %s, ft_memset : %s\n", str_test, str_real);

	// TESTE BZERO
	printf("\n---- bzero ----\n");
	char str_real2[50] = "Olá 42!";
	bzero(str_real2, 6);
	char str_test2[50] = "Olá 42!";
	ft_bzero(str_test2, 6);
	printf("\"Hello 42\" bzero (6) bzero: %s, seventh char : %i ft_bzero : %s seventh char : %i\n", str_test2, str_test2[6], str_real2, str_real2[6]);

	// TESTE MEMCPY
	printf("\n---- memcpy ----\n");
	char src_real1[50];
	char src_test1[50];
	char dest_real1[50];
	char dest_test1[50];
	strcpy(src_real1, "Daniel de Abreu Vargas");
	strcpy(src_test1, "Daniel de Abreu Vargas");
	strcpy(dest_real1, "Luna Lima Vargas");
	strcpy(dest_test1, "Luna Lima Vargas");
	printf("src content : %s, dest content : %s\n", src_real1, dest_real1);
	memcpy(dest_real1, src_real1, 6);
	ft_memcpy(dest_test1, src_test1, 6);
	printf("memcpy (dest, src, 6) ft_memcpy: %s real_memcpy : %s\n", dest_test1, dest_real1);

	// TESTE MEMMOVE
	printf("\n---- memmove ----\n");
	char str_test7[] = "Esse teste aqui ta dando ruim!";
	char str_real7[] = "Esse teste aqui ta dando ruim!";
	char str_dest18[] = "eeeeeeeeeeee";
	ft_memmove(str_test7, str_dest18, 11);
	memmove(str_real7, str_dest18, 11);
	printf("Real : %s\n", str_real7);
	printf("Test : %s\n", str_test7);

	printf("\n---- TESTE 2 memmove ----\n");
	printf("\nstr1 : Vousumir, str2 : Toaqui\n");
	char str1_test8[] = "Vousumir";
	char str1_real8[] = "Vousumir";
    char str2_test8[] = "Toaqui";
    char str2_real8[] = "Toaqui";
    ft_memmove(str1_test8, str2_test8, sizeof(str2_test8));
    memmove(str1_real8, str2_real8, sizeof(str2_real8));
	printf("    Real, str1 : %s, str2 : %s\n", str1_real8, str2_real8);
	printf("    Test, str1 : %s, str2 : %s\n", str1_test8, str2_test8);

	// TESTE TOUPPER
	printf("\n---- toupper ----\n");
	printf("d, A, 5, n, E toupper : %c, %c, %c, %c, %c\n", ft_toupper('d'), ft_toupper('A'), ft_toupper('5'), ft_toupper('n'), ft_toupper('E'));

	// TESTE TOLOWER
	printf("\n---- tolower ----\n");
	printf("L, U, 5, N, A tolower : %c, %c, %c, %c, %c\n", ft_tolower('L'), ft_tolower('U'), ft_tolower('5'), ft_tolower('N'), ft_tolower('A'));

	// TESTE STRCHR
	printf("\n---- strchr ----\n");
	char str_real3[50];
	strcpy(str_real3, "Teste fajuto numero 1");
	char *pos_real1 = strchr(str_real3, 'o');
	char *pos_test1 = ft_strchr(str_real3, 'o');
	printf("str : %s : strchr : %s real : %s\n", str_real3, pos_test1, pos_real1);

	// TESTE STRRCHR
	printf("\n---- strrchr ----\n");
	char str_real4[50];
	strcpy(str_real4, "Teste fajuto numero 2");
	char *pos_real2 = strrchr(str_real4, 'e');
	char *pos_test2 = ft_strrchr(str_real4, 'e');
	printf("str : %s : strrchr : %s real : %s\n", str_real4, pos_test2, pos_real2);

	// TESTE STRNCMP
	printf("\n---- strncmp ----\n");
	printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "ABCDEF", 2), strncmp("abcdef", "ABCDEF", 2));
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "abcdef", 2), strncmp("abcdef", "abcdef", 2));
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 5), strncmp("abcdef", "abcdey", 5));
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 6), strncmp("abcdef", "abcdey", 6));
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_strncmp("\200", "\0", 6), strncmp("\200", "\0", 6));

	// TESTE MEMCHR
	printf("\n---- memchr ----\n");
	char str_real5[50];
	strcpy(str_real5, "Hello 42 !");
	char *pos_real3 = memchr(str_real5, 'o', 5);
	char *pos_test3 = ft_memchr(str_real5, 'o', 5);
	printf("str : %s : memchr : %s, real : %s\n", str_real5, pos_test3, pos_real3);

	// TESTE MEMCMP
	printf("\n---- memcmp ----\n");
	printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "ABCDEF", 2), memcmp("abcdef", "ABCDEF", 2));
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "abcdef", 2), memcmp("abcdef", "abcdef", 2));
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 5), memcmp("abcdef", "abcdey", 5));
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 6), memcmp("abcdef", "abcdey", 6));	
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_memcmp("\200", "\0", 6), memcmp("\200", "\0", 6));

	printf("\n ---- PROBLEMATICOS ------\n");
   // TESTE STRLCPY
	printf("\n---- strlcpy ---\n");
	char src_strcpy[] = "Daniel de Abreu Vargas";
    char dest_test2[19];
	//char dest_real2[19];
	//int src_real2_s;
    int src_test2_s;
    src_test2_s = ft_strlcpy(dest_test2, src_strcpy, 5);
	//src_real2_s = strlcpy(dest_real2, src_strcpy, 5);
    printf("Test : Copied '%s' into '%s', length %d\n", src_strcpy, dest_test2, src_test2_s);
	//printf("Real : Copied '%s' into '%s', lenght %d\n", src_strcpy, dest_real2, src_real2_s); 

     // TESTE STRLCAT
     printf("\n---- strlcat ----\n");
     char src_strcat[] = "Eu sou o Goku !";
	 char dest_test6[19];
	 //char dest_real6[19];
	 //int src_real6_s;
     int src_test6_s;

     strcpy(dest_test6, "Olá, ");
     //strcpy(dest_real6, "Olá, ");
	 //src_real6_s = strlcat (dest_real6, src_strcat, 9);
	 src_test6_s = ft_strlcat(dest_test6, src_strcat, 9);
     printf("Test : Added '%s' : '%s', length %d\n", src_strcat, dest_test6, src_test6_s);
	 //printf("Real : Added '%s' : '%s', lenght %d\n", src_strcat2, dest_real6, src_real6_s);
	

 	// TESTE STRNSTR
	//printf("\n---- strnstr ----\n");
	//printf("hay = 'Hello 42', need = '', len = 4 : %s, real : %s\n", ft_strnstr("Hello 42", "", 4), strnstr("Hello 42", "", 4));
	//printf("hay = 'Hello 42', need = 'lo', len = 5 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 5), strnstr("Hello 42", "lo", 5));
	//printf("hay = 'Hello 42', need = 'lo', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 100), strnstr("Hello 42", "lo", 100));
	//printf("hay = 'Hello 42', need = 'uiok', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "uiok", 100), strnstr("Hello 42", "uiok", 100)); 

	// TESTE ATOI
	printf("\n---- atoi ----\n");
	printf("'9985' : %d, real : %d\n", ft_atoi("9985"), atoi("9985"));
	printf("'-9985' : %d, real : %d\n", ft_atoi("-9985"), atoi("-9985"));
	printf("'   +9985' : %d, real : %d\n", ft_atoi("   +9985"), atoi("   +9985"));
	printf("'   +-+9985' : %d, real : %d\n", ft_atoi("   +-+9985"), atoi("   +-+9985"));
	printf("' y  +-+9985' : %d, real : %d\n", ft_atoi(" y  +-+9985"), atoi(" y  +-+9985"));
	printf("'   99o85' : %d, real : %d\n", ft_atoi("   99o85"), atoi("   99o85"));
	printf("'o' : %d, real : %d\n", ft_atoi("o"), atoi("o"));

    // TESTE CALLOC
	printf("\n---- calloc ----\n");
    int j = 0;
	int	*calloc_test;
	calloc_test = (int *)ft_calloc(j, sizeof(int));
	printf("Calloc em uma array com %i int\n", j);
	for(int i = 0; i < j; i++)
		printf("%d ", calloc_test[i]);
	printf("\n");
	free(calloc_test);

	// TESTE strdup
	printf("\n---- strdup ----\n");
	char *str9 = "Luna é a mais linda do universo";
	printf("Original : %s, Dup : %s\n", str9, ft_strdup(str9));

    //TESTE substr
    printf("\n--- substr ---\n");
    char ft_substrteste[50] = "Ola Mundo!";
    printf("Teste é feio mas Ola %s\n", ft_substr(ft_substrteste, 4, 5));

    //TESTE STRJOIN
    printf("\n--- strjoin ---\n");
    char ft_strjointeste1[20] = "Olá";
    char ft_strjointeste2[20] = " Mundo";
    printf("%s\n", ft_strjoin(ft_strjointeste1, ft_strjointeste2));

    //TESTE STRTRIM
    printf("\n---STRTRIM---\n");
    char teste[20] = "@//--12345--@/5-";
    char teste2[20] = "-@/";
    printf("%s\n", ft_strtrim(teste,teste2));

    //TESTE ITOA
	printf("\n---- ITOA ----\n");
	printf("'9985' : %s\n", ft_itoa(9985));
	printf("'-9985' : %s\n", ft_itoa(-9985));
	printf("'-42568' : %s\n", ft_itoa(-42568));
	printf("'42568' : %s\n", ft_itoa(42568));

    //TESTE striteri
    printf("\n--- striteri ---\n");
    printf("vamos testar isso aqui, agora passando a funcao = ");
    char charstriteri[35] = "vamos testar isso aqui";
    ft_striteri(charstriteri, to_upperteri);
    printf("%s\n", charstriteri);

    //TESTE strmapi
    printf("\n--- strmapi ---\n");
        char charstrmapi[35] = "VAMOS TESTAR ISSO AQUI";
    printf("VAMOS TESTAR ISSO AQUI, agora passando a funcao = %s \n", ft_strmapi(charstrmapi, to_lowermapi));

	// TESTE putchar_FD
	printf("\n--- putchar_fd ---\n");
	ft_putchar_fd('a',1);	
	ft_putchar_fd('\n',1);

	//TESTE putstr_FD
	printf("\n--- putstr_fd ---\n");
	ft_putstr_fd("fancy putstr", 1);
	ft_putchar_fd('\n',1);

	//TESTE putendl_FD
	printf("\n--- putendl_fd ---\n");
	ft_putendl_fd("putendl fancy", 1);

	//TESTE putnbr_FD
	printf("\n--- putnbr_fd ---\n");
	ft_putnbr_fd(42,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(-42,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(-1134142,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(3333142,1);
	ft_putchar_fd('\n',1);

	//TESTE Split
	printf("\n--- ft_split ---\n");
	char** testesplit = ft_split("vamositestariessaifuncao", 'i');
	int ts = 0;
	while(ts < 4)
	{
		printf("posicao na array[%i] = %s\n", ts, testesplit[ts]);
		ts++;
	}
}
