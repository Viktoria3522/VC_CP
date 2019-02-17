# include  < iostream >

// додаткова бібліотека
# include  < time.h >

использование  пространства имен  std ;

int  main ()
{
	// генератор випадкових чисел
	srand (( без знака ) время ( NULL ));
	setlocale (LC_ALL, " .1251 " );
	система ( « цвет 1F » );

	// розмири матрицi
	int A [ 100 ] [ 100 ];
	int n, k, i;
	char z;

	n = 6 ;
	int a = - 99 ;
	int b = 99 ;

	делать
	{
		система ( " cls " );
		printf ( " \ n \ t Заповнення матрици A [% 2i] [% 2i] цiлими двозначними числами. \ n \ n " , n, n);

		для (k = 0 ; k <n; k ++)
		{
			cout << " \ t " ;
			для (i = 0 ; i <n; i ++)
			{
				делать
				{
					A [k] [i] = a + rand ()% (b - a + 1 );
				} while ( abs (A [k] [i]) < 10 || abs (A [k] [i])> 99 );
				printf ( " % 5i " , A [k] [i]);
			}
			cout << " \ n " ;
		}

		printf ( " \ n \ t Копия матрицi A [% 2i] [% 2i] цiлими двозначними числами. \ n \ n " , n, n);

		длинная доб = 1 ;
		int poz, neg, sum, p, min, max, B [ 10000 ];

		поз = 0 ;
		нег = 0 ;
		сумма = 0 ;
		р = 0 ;

		для ( int j = 0 ; j <n; j ++) B [j] = 0 ;

		для (k = 0 ; k <n; k ++)
		{
			cout << " \ t " ;
			для (i = 0 ; i <n; i ++)
			{
				// if (k! = i) printf ("% 5i", A [k] [i]); // - 01
				// if (k! = ni-1) printf ("% 5i", A [k] [i]); // - 02
				// if (k! = i && k! = n - i - 1) printf ("% 5i", A [k] [i]); // - 03
				// if (i% 2! = 0) printf ("% 5i", A [k] [i]); // - 04
				// if (i% 2 == 0) printf ("% 5i", A [k] [i]); // - 05
				// if (k% 2! = 0) printf ("% 5i", A [k] [i]); // - 06
				// if (k% 2 == 0) printf ("% 5i", A [k] [i]); // - 07
				// if (i> = n / 2) printf ("% 5i", A [k] [i]); // - 09
				// if (i <= n / 2) printf ("% 5i", A [k] [i]); // - 10
				// if (k> = n / 2) printf ("% 5i", A [k] [i]); // - 11
				// if (k <= n / 2) printf ("% 5i", A [k] [i]); // - 12
				// if (k> ni-1) printf ("% 5i", A [k] [i]); // - 13
				// if (k <n - i - 1) printf ("% 5i", A [k] [i]); // - 14
				// if (k <i) printf ("% 5i", A [k] [i]); // - 15
				// if (k> i) printf ("% 5i", A [k] [i]); // - 16
		    	// if (k <i || k> n - i - 1) printf ("% 5i", A [k] [i]); // - 17
				// if (k> i || k <n - i - 1) printf ("% 5i", A [k] [i]); // - 18
				// if (k> ni-1 || k> i) printf ("% 5i", A [k] [i]); // - 19
				// if (k <ni-1 || k <i) printf ("% 5i", A [k] [i]); // - 20
				// if ((k <i || k> n - i - 1) && (k> i || k <n - i - 1)) printf ("% 5i", A [k] [i]); // - 21
				// if ((k> n - i - 1 || k> i) && (k <n - i - 1 || k <i)) printf ("% 5i", A [k] [i]); // - 22
				// if (i> = n / 2 || k> = n / 2) printf ("% 5i", A [k] [i]); // - 23
				// if (i <n / 2 || k <n / 2) printf ("% 5i", A [k] [i]); // - 24
				// if (i <n / 2 || k> n / 2) printf ("% 5i", A [k] [i]); // - 25
				// if (i> = n / 2 || k <n / 2) printf ("% 5i", A [k] [i]); // - 26
				// if ((i> = n / 2 || k> = n / 2) && (i <n / 2 || k <n / 2)) printf ("% 5i", A [k] [i] ); // - 27
				// if ((i <n / 2 || k <n / 2) && (i> = n / 2 || k> = n / 2)) printf ("% 5i", A [k] [i] ); // - 28
				// if (k> n / 2 + i || k <n / 2 - i -1 || i> = n / 2) printf ("% 5i", A [k] [i]); // - 29
				// ______________ // - 30
				// if ((i> k + n / 2 || i <n / 2 - k - 1) || k> = n / 2) printf ("% 5i", A [k] [i]); // - 31
				// _____________________ // - 32
				// if (k> n / 2 - 1 || k> = n - i) printf ("% 5i", A [k] [i]); // - 33
				// if (k> n / 2 - 1 && (k> i || k <n - i - 1)) printf ("% 5i", A [k] [i]); // - 34
				// if (k> = n / 2 || k> i) printf ("% 5i", A [k] [i]); // - 35
				// if (k> = n / 2 && (k <i || k> n - i - 1)) printf ("% 5i", A [k] [i]); // - 36
				// if ((k <i || k> n - i - 1) && (i> = n / 2 || k> = n / 2)) printf ("% 5i", A [k] [i] ); // - 37
				// if (i> = n / 2 && k <i) printf ("% 5i", A [k] [i]); // - 38
				// if (k <i || i> = n / 2) printf ("% 5i", A [k] [i]); // - 39
				// if (i> = n / 2 && k> n - i - 1) printf ("% 5i", A [k] [i]); // - 40
				// if (k <n - i - 1 && k> i) printf ("% 5i", A [k] [i]); // - 41
				// if (k <n - i - 1 && k <i) printf ("% 5i", A [k] [i]); // - 42
				// if (k> n - i - 1 && k <i) printf ("% 5i", A [k] [i]); // - 43
				// if (k> n - i - 1 && k> i) printf ("% 5i", A [k] [i]); // - 44
				// if ((k> n / 2 + i || k <n / 2 - i -1 || i> = n / 2) && (i> = n / 2 || k> = n / 2)) printf ("% 5i", A [k] [i]); // - 45
				// _____________________ // 46
				// if ((((i> k + n / 2 || i <n / 2 - k - 1) || k> = n / 2) && (i> = n / 2 || k> = n / 2 )) printf ("% 5i", A [k] [i]); // - 47
				// _____________________ // 48
				остальное 														// - 08
				{
					printf ( "     * " );
					B [p] = A [k] [i];
					р ++;

					если (A [k] [i]> 0 )
					{
						ПОЗ ++;
						сумма + = A [k] [i];
					}
					еще
					{
						нег ++;
						dob * = A [k] [i];
					}
				}
			}
			cout << " \ n " ;
		}

		min = B [ 0 ];
		для ( int j = 0 ; j <p; j ++)
		{
			если (B [j] <мин) min = B [j];
		}

		max = B [ 0 ];
		для ( int j = 0 ; j <p; j ++)
		{
			if (B [j]> max) max = B [j];
		}

		printf ( " \ n \ n \ t додатних:% i " , poz);
		printf ( " \ n \ t вiд'ємних:% i " , neg);
		printf ( " \ n \ t сума додатних:% i " , сумма);
		printf ( " \ n \ t добуток вiд'ємних:% i " , доб);
		printf ( " \ n \ t найбiльший:% i " , max);
		printf ( " \ n \ t найменший:% i " , мин);

		cout << " \ n \ n \ t Продовжити (да / нет)? " ;
		cin >> z;
	} while (z! = ' n ' );

	cout << endl << endl << " \ t " ;
	// system ("пауза");
	вернуть  0 ;
}
