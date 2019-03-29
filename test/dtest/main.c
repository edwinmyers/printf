/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 15:02:16 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/26 15:46:00 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"
#include <stdio.h>

int main()
{
    // %hhd   tests;
    // %d tests
	printf("d tests : \n\n");
	ft_printf("my func1:  %d\n", 4);
    printf("orig: %d\n\n", 4);
    ft_printf("my func2:  %d\n", 99999);
    printf("orig: %d\n\n", 99999);
    ft_printf("my func3:  %d\n", -99999);
    printf("orig: %d\n\n", -99999);
    ft_printf("my func4:  %d\n", -1);
    printf("orig: %d\n\n", -1);
    ft_printf("my func5:  %d\n", "dfdf");
    printf("orig: %d\n\n", "dfdf");
    ft_printf("my func6:  %d\n", 0);
    printf("orig: %d\n\n", 0);
    ft_printf("my func7:  %d\n", 9999999999);
    printf("orig: %d\n\n", 9999999999);
    ft_printf("my func8:  %d\n", 2.984);
    printf("orig: %d\n\n", 2.984);
    ft_printf("my func9:  %d\n", 3,44);
    printf("orig: %d\n\n", 3,44);
    ft_printf("my func10:  %d\n", -999999999);
    printf("orig: %d\n\n", -999999999);
    ft_printf("my func11:  %d\n", 232323);
    printf("orig: %d\n\n", 232323);
    ft_printf("my func12:  %d\n", 0.5);
    printf("orig: %d\n\n", 0.5);
    ft_printf("my func13:  %d\n", 'c');
    printf("orig: %d\n\n", 'c');
    ft_printf("my func14:  %d\n", NULL);
    printf("orig: %d\n\n", NULL);
    ft_printf("my func15:  %d\n", 2 + 3);
    printf("orig: %d\n\n", 2 + 3);
    ft_printf("my func16:  %d\n", 99 / 11);
    printf("orig: %d\n\n", 99 / 11);
    ft_printf("my func17:  %d\n", 3 - 9);
    printf("orig: %d\n\n", 3 - 9);
    ft_printf("my func18:  %d\n", -2.3);
    printf("orig: %d\n\n", -2.3);
    ft_printf("my func19:  %d\n", 2 * 3);
    printf("orig: %d\n\n", 2 * 3);
    ft_printf("my func20:  %d\n", 0004);
    printf("orig: %d\n\n", 0004);


	printf("\n\nlld tests : \n\n");

	// lld tests

	printf("orig:       %lld\n", 4);
    ft_printf("my func 1:  %lld\n", 4);
    printf("orig:       %lld\n", 0);
    ft_printf("my func 2:  %lld\n", 0);
    printf("orig:       %lld\n", -1);
    ft_printf("my func 3:  %lld\n", -1);
    printf("orig:       %lld\n", 10);
    ft_printf("my func 4:  %lld\n", 10);
    printf("orig:       %lld\n", 256);
    ft_printf("my func 5:  %lld\n", 256);
    printf("orig:       %lld\n", 999);
    ft_printf("my func 6:  %lld\n", 999);
    printf("orig:       %lld\n", -999);
    ft_printf("my func 7:  %lld\n", -999);
    printf("orig:       %lld\n", 9999);
    ft_printf("my func 8:  %lld\n", 9999);
    printf("orig:       %lld\n", -9999);
    ft_printf("my func 9:  %lld\n", -9999);
    printf("orig:        %lld\n", 9999999999);
    ft_printf("my func 10:  %lld\n", 9999999999);
    printf("orig:        %lld\n", 2147483647);
    ft_printf("my func 11:  %lld\n", 2147483647);
    printf("orig:        %lld\n", -2147483647);
    ft_printf("my func 12:  %lld\n", -2147483647);
    printf("orig:        %lld\n", 9223372036854775807);
    ft_printf("my func 13:  %lld\n", 9223372036854775807);
    printf("orig:        %lld\n", -9223372036854775807);
    ft_printf("my func 14:  %lld\n", -9223372036854775807);
    printf("orig:        %lld\n", NULL);
    ft_printf("my func 15:  %lld\n", NULL);
    printf("orig:        %lld\n", 'c');
    ft_printf("my func 16:  %lld\n", 'c');
    printf("orig:        %lld\n", 4 + 4);
    ft_printf("my func 17:  %lld\n", 4 + 4);
    printf("orig:        %lld\n", 4 * 4);
    ft_printf("my func 18:  %lld\n", 4 * 4);
    printf("orig:        %lld\n", 2.3);
    ft_printf("my func 19:  %lld\n", 2.3);
    printf("orig:        %lld\n", 1.0);
    ft_printf("my func 20:  %lld\n", 1.0);
    printf("orig:        %lld\n", -2.3);
    ft_printf("my func 21:  %lld\n", -2.3);
    printf("orig:        %lld\n", -1.0);
    ft_printf("my func 22:  %lld\n", -1.0);
    printf("orig:        %lld\n", 0004);
    ft_printf("my func 23:  %lld\n", 0004);
    printf("orig:        %lld\n", -0004);
    ft_printf("my func 24:  %lld\n", -0004);



	printf("\n\nhhd tests : \n\n");

	   // %hhd   tests;
    printf("d tests : \n\n");
	ft_printf("my func1:  %hhd\n", 4);
    printf("orig:  %hhd\n", 4);
    ft_printf("my func2:  %hhd\n", 99999);
    printf("orig:  %hhd\n", 99999);
    ft_printf("my func3:  %hhd\n", -99999);
    printf("orig:  %hhd\n", -99999);
    ft_printf("my func4:  %hhd\n", -1);
    printf("orig:  %hhd\n", -1);
    ft_printf("my func5:  %hhd\n", "dfdf");
    printf("orig:  %hhd\n", "dfdf");
    ft_printf("my func6:  %hhd\n", 0);
    printf("orig:  %hhd\n", 0);
    ft_printf("my func7:  %hhd\n", 9999999999);
    printf("orig:  %hhd\n", 9999999999);
    ft_printf("my func8:  %hhd\n", 2.984);
    printf("orig:  %hhd\n", 2.984);
    ft_printf("my func9:  %hhd\n", 3,44);
    printf("orig:  %hhd\n", 3,44);
    ft_printf("my func10:  %hhd\n", -999999999);
    printf("orig:  %hhd\n", -999999999);
    ft_printf("my func11:  %hhd\n", 232323);
    printf("orig:  %hhd\n", 232323);
    ft_printf("my func12:  %hhd\n", 0.5);
    printf("orig:  %hhd\n", 0.5);
    ft_printf("my func13:  %hhd\n", 'c');
    printf("orig:  %hhd\n", 'c');
    ft_printf("my func14:  %hhd\n", NULL);
    printf("orig:  %hhd\n", NULL);
    ft_printf("my func15:  %hhd\n", 2 + 3);
    printf("orig:  %hhd\n", 2 + 3);
    ft_printf("my func16:  %hhd\n", 99 / 11);
    printf("orig:  %hhd\n", 99 / 11);
    ft_printf("my func17:  %hhd\n", 3 - 9);
    printf("orig:  %hhd\n", 3 - 9);
    ft_printf("my func18:  %hhd\n", -2.3);
    printf("orig:  %hhd\n", -2.3);
    ft_printf("my func19:  %hhd\n", 2 * 3);
    printf("orig:  %hhd\n", 2 * 3);
    ft_printf("my func20:  %hhd\n", 0004);
    printf("orig:  %hhd\n", 0004);


	
	// %hd tests
	printf("hd tests:\n\n")
	  printf("orig:  %hd\n", 4);
    ft_printf("my func 1:  %hd\n\n", 4);
    printf("orig:  %hd\n", 0);
    ft_printf("my func 2:  %hd\n\n", 0);
    printf("orig:  %hd\n", -1);
    ft_printf("my func 3:  %hd\n\n", -1);
    printf("orig:  %hd\n", 10);
    ft_printf("my func 4:  %hd\n\n", 10);
    printf("orig:  %hd\n", 256);
    ft_printf("my func 5:  %hd\n\n", 256);
    printf("orig:  %hd\n", 999);
    ft_printf("my func 6:  %hd\n\n", 999);
    printf("orig:  %hd\n", -999);
    ft_printf("my func 7:  %hd\n\n", -999);
    printf("orig:  %hd\n", 9999);
    ft_printf("my func 8:  %hd\n\n", 9999);
    printf("orig:  %hd\n", -9999);
    ft_printf("my func 9:  %hd\n\n", -9999);
    printf("orig:  %hd\n", 9999999999);
    ft_printf("my func 10:  %hd\n\n", 9999999999);
    printf("orig:  %hd\n", 2147483647);
    ft_printf("my func 11:  %hd\n\n", 2147483647);
    printf("orig:  %hd\n", -2147483647);
    ft_printf("my func 12:  %hd\n\n", -2147483647);
    printf("orig:  %hd\n", 9223372036854775807);
    ft_printf("my func 13:  %hd\n\n", 9223372036854775807);
    printf("orig:  %hd\n", -9223372036854775807);
    ft_printf("my func 14:  %hd\n\n", -9223372036854775807);
    printf("orig:  %hd\n", NULL);
    ft_printf("my func 15:  %hd\n\n", NULL);
    printf("orig:  %hd\n", 'c');
    ft_printf("my func 16:  %hd\n\n", 'c');
    printf("orig:  %hd\n", 4 + 4);
    ft_printf("my func 17:  %hd\n\n", 4 + 4);
    printf("orig:  %hd\n", 4 * 4);
    ft_printf("my func 18:  %hd\n\n", 4 * 4);
    printf("orig:  %hd\n", 2.3);
    ft_printf("my func 19:  %hd\n\n", 2.3);
    printf("orig:  %hd\n", 1.0);
    ft_printf("my func 20:  %hd\n\n", 1.0);
    printf("orig:  %hd\n", -2.3);
    ft_printf("my func 21:  %hd\n\n", -2.3);
    printf("orig:  %hd\n", -1.0);
    ft_printf("my func 22:  %hd\n\n", -1.0);
    printf("orig:  %hd\n", 0004);
    ft_printf("my func 23:  %hd\n\n", 0004);
    printf("orig:  %hd\n", -0004);
    ft_printf("my func 24:  %hd\n\n", -0004);



	// %.3d tests
	printf("orig: %.3d\n", -1);
	ft_printf("my func: %.3d\n\n", -1);
	printf("orig: %.3d\n", 99999999);
	ft_printf("my func: %.3d\n\n", 99999999);
	printf("orig: %.3d\n", 1);
	ft_printf("my func: %.3d\n\n", 1);
	printf("orig: %.3d\n", 2.3);
	ft_printf("my func: %.3d\n\n", 2.3);
	printf("orig: %.3d\n", 'c');
	ft_printf("my func: %.3d\n\n", 'c');
	printf("orig: %.3d\n", -99999999);
	ft_printf("my func: %.3d\n\n", -99999999);
	printf("orig: %.3d\n", "fd");
	ft_printf("my func: %.3d\n\n", "fd");
	printf("orig: %.3d\n", NULL);
	ft_printf("my func: %.3d\n\n", NULL);
	printf("orig: %.3d\n", 0);
	ft_printf("my func: %.3d\n\n", 0);

    	// %-.20d tests
	printf("orig: %-.20d\n", -1);
	ft_printf("my f: %-.20d\n\n", -1);
	printf("orig: %-.20d\n", 9999999999);
	ft_printf("my f: %-.20d\n\n", 9999999999);
	printf("orig: %-.20d\n", 1);
	ft_printf("my f: %-.20d\n\n", 1);
	printf("orig: %-.20d\n", 2.3);
	ft_printf("my f: %-.20d\n\n", 2.3);
	printf("orig: %-.20d\n", 'c');
	ft_printf("my f: %-.20d\n\n", 'c');
	printf("orig: %-.20d\n", -9999999999);
	ft_printf("my f: %-.20d\n\n", -9999999999);
	printf("orig: %-.20d\n", "fd");
	ft_printf("my f: %-.20d\n\n", "fd");
	printf("orig: %-.20d\n", NULL);
	ft_printf("my f: %-.20d\n\n", NULL);
	printf("orig: %-.20d\n", 0);
	ft_printf("my f: %-.20d\n\n", 0);


	// %25d tests

printf("orig1: %25d\n", -1);
	ft_printf("my f1: %25d\n\n", -1);
	printf("orig2: %25d\n", 9999999999);
	ft_printf("my f2: %25d\n\n", 9999999999);
	printf("orig3: %25d\n", 1);
	ft_printf("my f3: %25d\n\n", 1);
	printf("orig4: %25d\n", 2.3);
	ft_printf("my f4: %25d\n\n", 2.3);
	printf("orig5: %25d\n", 'c');
	ft_printf("my f5: %25d\n\n", 'c');
	printf("orig6: %25d\n", -9999999999);
	ft_printf("my f6: %25d\n\n", -9999999999);
	printf("orig7: %25d\n", "fd");
	ft_printf("my f7: %25d\n\n", "fd");
	printf("orig8: %25d\n", NULL);
	ft_printf("my f8: %25d\n\n", NULL);
	printf("orig9: %25d\n", 0);
	ft_printf("my f9: %25d\n\n", 0);
	printf("orig10: %25d\n", 2 * 8);
	ft_printf("my f10: %25d\n\n", 2 * 8);
	printf("orig11: %25d\n", 8 + 99);
	ft_printf("my f11: %25d\n\n", 8 + 99);
	printf("orig12: %25d\n", 92 - 213123);
	ft_printf("my f12: %25d\n\n", 92 - 213123);
	printf("orig13: %25d\n", 2000 / 10);
	ft_printf("my f13: %25d\n\n", 2000 / 10);

    	// %6.20d tests
	printf("orig1: %6.20d\n", -1);
	ft_printf("my f1: %6.20d\n\n", -1);
	printf("orig2: %6.20d\n", 9999999999);
	ft_printf("my f2: %6.20d\n\n", 9999999999);
	printf("orig3: %6.20d\n", 1);
	ft_printf("my f3: %6.20d\n\n", 1);
	printf("orig4: %6.20d\n", 2.3);
	ft_printf("my f4: %6.20d\n\n", 2.3);
	printf("orig5: %6.20d\n", 'c');
	ft_printf("my f5: %6.20d\n\n", 'c');
	printf("orig6: %6.20d\n", -9999999999);
	ft_printf("my f6: %6.20d\n\n", -9999999999);
	printf("orig7: %6.20d\n", "fd");
	ft_printf("my f7: %6.20d\n\n", "fd");
	printf("orig8: %6.20d\n", NULL);
	ft_printf("my f8: %6.20d\n\n", NULL);
	printf("orig9: %6.20d\n", 0);
	ft_printf("my f9: %6.20d\n\n", 0);
	printf("orig10: %6.20d\n", 2 * 8);
	ft_printf("my f10: %6.20d\n\n", 2 * 8);
	printf("orig11: %6.20d\n", 8 + 99);
	ft_printf("my f11: %6.20d\n\n", 8 + 99);
	printf("orig12: %6.20d\n", 92 - 213123);
	ft_printf("my f12: %6.20d\n\n", 92 - 213123);
	printf("orig13: %6.20d\n", 2000 / 10);
	ft_printf("my f13: %6.20d\n\n", 2000 / 10);

    // %25.5d tests
	printf("orig1: %25.5d\n", -1);
	ft_printf("my f1: %25.5d\n\n", -1);
	printf("orig2: %25.5d\n", 9999999999);
	ft_printf("my f2: %25.5d\n\n", 9999999999);
	printf("orig3: %25.5d\n", 1);
	ft_printf("my f3: %25.5d\n\n", 1);
	printf("orig4: %25.5d\n", 2.3);
	ft_printf("my f4: %25.5d\n\n", 2.3);
	printf("orig5: %25.5d\n", 'c');
	ft_printf("my f5: %25.5d\n\n", 'c');
	printf("orig6: %25.5d\n", -9999999999);
	ft_printf("my f6: %25.5d\n\n", -9999999999);
	printf("orig7: %25.5d\n", "fd");
	ft_printf("my f7: %25.5d\n\n", "fd");
	printf("orig8: %25.5d\n", NULL);
	ft_printf("my f8: %25.5d\n\n", NULL);
	printf("orig9: %25.5d\n", 0);
	ft_printf("my f9: %25.5d\n\n", 0);
	printf("orig10: %25.5d\n", 2 * 8);
	ft_printf("my f10: %25.5d\n\n", 2 * 8);
	printf("orig11: %25.5d\n", 8 + 99);
	ft_printf("my f11: %25.5d\n\n", 8 + 99);
	printf("orig12: %25.5d\n", 92 - 213123);
	ft_printf("my f12: %25.5d\n\n", 92 - 213123);
	printf("orig13: %25.5d\n", 2000 / 10);
	ft_printf("my f13: %25.5d\n\n", 2000 / 10);
// %-25.5d tests
	printf("orig1: %-25.5d\n", -1);
	ft_printf("my f1: %-25.5d\n", -1);
	printf("orig2: %-25.5d\n", 9999999999);
	ft_printf("my f2: %-25.5d\n", 9999999999);
	printf("orig3: %-25.5d\n", 1);
	ft_printf("my f3: %-25.5d\n", 1);
	printf("orig4: %-25.5d\n", 2.3);
	ft_printf("my f4: %-25.5d\n", 2.3);
	printf("orig5: %-25.5d\n", 'c');
	ft_printf("my f5: %-25.5d\n", 'c');
	printf("orig6: %-25.5d\n", -9999999999);
	ft_printf("my f6: %-25.5d\n", -9999999999);
	printf("orig7: %-25.5d\n", "fd");
	ft_printf("my f7: %-25.5d\n", "fd");
	printf("orig8: %-25.5d\n", NULL);
	ft_printf("my f8: %-25.5d\n", NULL);
	printf("orig9: %-25.5d\n", 0);
	ft_printf("my f9: %-25.5d\n", 0);
	printf("orig10: %-25.5d\n", 2 * 8);
	ft_printf("my f10: %-25.5d\n", 2 * 8);
	printf("orig11: %-25.5d\n", 8 + 99);
	ft_printf("my f11: %-25.5d\n", 8 + 99);
	printf("orig12: %-25.5d\n", 92 - 213123);
	ft_printf("my f12: %-25.5d\n", 92 - 213123);
	printf("orig13: %-25.5d\n", 2000 / 10);
	ft_printf("my f13: %-25.5d\n", 2000 / 10);
    // %0.5d tests
	printf("orig1: %0.5d\n", -1);
	ft_printf("my f1: %0.5d\n", -1);
	printf("orig2: %0.5d\n", 9999999999);
	ft_printf("my f2: %0.5d\n", 9999999999);
	printf("orig3: %0.5d\n", 1);
	ft_printf("my f3: %0.5d\n", 1);
	printf("orig4: %0.5d\n", 2.3);
	ft_printf("my f4: %0.5d\n", 2.3);
	printf("orig5: %0.5d\n", 'c');
	ft_printf("my f5: %0.5d\n", 'c');
	printf("orig6: %0.5d\n", -9999999999);
	ft_printf("my f6: %0.5d\n", -9999999999);
	printf("orig7: %0.5d\n", "fd");
	ft_printf("my f7: %0.5d\n", "fd");
	printf("orig8: %0.5d\n", NULL);
	ft_printf("my f8: %0.5d\n", NULL);
	printf("orig9: %0.5d\n", 0);
	ft_printf("my f9: %0.5d\n", 0);
	printf("orig10: %0.5d\n", 2 * 8);
	ft_printf("my f10: %0.5d\n", 2 * 8);
	printf("orig11: %0.5d\n", 8 + 99);
	ft_printf("my f11: %0.5d\n", 8 + 99);
	printf("orig12: %0.5d\n", 92 - 213123);
	ft_printf("my f12: %0.5d\n", 92 - 213123);
	printf("orig13: %0.5d\n", 2000 / 10);
	ft_printf("my f13: %0.5d\n", 2000 / 10);

    // %0+20.25d tests
	printf("orig1: %0+20.25d\n", -1);
	ft_printf("my f1: %0+20.25d\n", -1);
	printf("orig2: %0+20.25d\n", 9999999999);
	ft_printf("my f2: %0+20.25d\n", 9999999999);
	printf("orig3: %0+20.25d\n", 1);
	ft_printf("my f3: %0+20.25d\n", 1);
	printf("orig4: %0+20.25d\n", 2.3);
	ft_printf("my f4: %0+20.25d\n", 2.3);
	printf("orig5: %0+20.25d\n", 'c');
	ft_printf("my f5: %0+20.25d\n", 'c');
	printf("orig6: %0+20.25d\n", -9999999999);
	ft_printf("my f6: %0+20.25d\n", -9999999999);
	printf("orig7: %0+20.25d\n", "fd");
	ft_printf("my f7: %0+20.25d\n", "fd");
	printf("orig8: %0+20.25d\n", NULL);
	ft_printf("my f8: %0+20.25d\n", NULL);
	printf("orig9: %0+20.25d\n", 0);
	ft_printf("my f9: %0+20.25d\n", 0);
	printf("orig10: %0+20.25d\n", 2 * 8);
	ft_printf("my f10: %0+20.25d\n", 2 * 8);
	printf("orig11: %0+20.25d\n", 8 + 99);
	ft_printf("my f11: %0+20.25d\n", 8 + 99);
	printf("orig12: %0+20.25d\n", 92 - 213123);
	ft_printf("my f12: %0+20.25d\n", 92 - 213123);
	printf("orig13: %0+20.25d\n", 2000 / 10);
	ft_printf("my f13: %0+20.25d\n", 2000 / 10);
    return (0);






}