#define rand	pan_rand
#define pthread_equal(a,b)	((a)==(b))
#if defined(HAS_CODE) && defined(VERBOSE)
	#ifdef BFS_PAR
		bfs_printf("Pr: %d Tr: %d\n", II, t->forw);
	#else
		cpu_printf("Pr: %d Tr: %d\n", II, t->forw);
	#endif
#endif
	switch (t->forw) {
	default: Uerror("bad forward move");
	case 0:	/* if without executable clauses */
		continue;
	case 1: /* generic 'goto' or 'skip' */
		IfNotBlocked
		_m = 3; goto P999;
	case 2: /* generic 'else' */
		IfNotBlocked
		if (trpt->o_pm&1) continue;
		_m = 3; goto P999;

		 /* PROC :init: */
	case 3: // STATE 1 - number1.pml:47 - [(run thread1())] (0:0:0 - 1)
		IfNotBlocked
		reached[3][1] = 1;
		if (!(addproc(II, 1, 0)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 4: // STATE 2 - number1.pml:48 - [(run thread2())] (0:0:0 - 1)
		IfNotBlocked
		reached[3][2] = 1;
		if (!(addproc(II, 1, 1)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 5: // STATE 3 - number1.pml:49 - [(run checkState())] (0:0:0 - 1)
		IfNotBlocked
		reached[3][3] = 1;
		if (!(addproc(II, 1, 2)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 6: // STATE 4 - number1.pml:50 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[3][4] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */

		 /* PROC checkState */
	case 7: // STATE 1 - number1.pml:43 - [assert((((x==7)&&(y==3))||((x==10)&&(y==0))))] (0:0:0 - 1)
		IfNotBlocked
		reached[2][1] = 1;
		spin_assert((((now.x==7)&&(now.y==3))||((now.x==10)&&(now.y==0))), "(((x==7)&&(y==3))||((x==10)&&(y==0)))", II, tt, t);
		_m = 3; goto P999; /* 0 */
	case 8: // STATE 2 - number1.pml:44 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[2][2] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */

		 /* PROC thread2 */
	case 9: // STATE 1 - number1.pml:24 - [((x==y))] (0:0:0 - 1)
		IfNotBlocked
		reached[1][1] = 1;
		if (!((now.x==now.y)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 10: // STATE 2 - number1.pml:25 - [x = 8] (0:11:2 - 1)
		IfNotBlocked
		reached[1][2] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = now.x;
		now.x = 8;
#ifdef VAR_RANGES
		logval("x", now.x);
#endif
		;
		/* merge: y = 2(11, 3, 11) */
		reached[1][3] = 1;
		(trpt+1)->bup.ovals[1] = now.y;
		now.y = 2;
#ifdef VAR_RANGES
		logval("y", now.y);
#endif
		;
		/* merge: goto :b1(11, 4, 11) */
		reached[1][4] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 11: // STATE 11 - number1.pml:32 - [execute = 1] (0:0:1 - 2)
		IfNotBlocked
		reached[1][11] = 1;
		(trpt+1)->bup.oval = ((int)execute);
		execute = 1;
#ifdef VAR_RANGES
		logval("execute", ((int)execute));
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 12: // STATE 12 - number1.pml:33 - [printf('state of thread 2 %d',execute)] (0:0:0 - 1)
		IfNotBlocked
		reached[1][12] = 1;
		Printf("state of thread 2 %d", ((int)execute));
		_m = 3; goto P999; /* 0 */
	case 13: // STATE 13 - number1.pml:34 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[1][13] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */

		 /* PROC thread1 */
	case 14: // STATE 1 - number1.pml:10 - [((x!=y))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][1] = 1;
		if (!((now.x!=now.y)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 15: // STATE 2 - number1.pml:11 - [x = (x-1)] (0:7:2 - 1)
		IfNotBlocked
		reached[0][2] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = now.x;
		now.x = (now.x-1);
#ifdef VAR_RANGES
		logval("x", now.x);
#endif
		;
		/* merge: y = (y+1)(7, 3, 7) */
		reached[0][3] = 1;
		(trpt+1)->bup.ovals[1] = now.y;
		now.y = (now.y+1);
#ifdef VAR_RANGES
		logval("y", now.y);
#endif
		;
		/* merge: .(goto)(0, 8, 7) */
		reached[0][8] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 16: // STATE 5 - number1.pml:14 - [((x==y))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][5] = 1;
		if (!((now.x==now.y)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 17: // STATE 10 - number1.pml:18 - [execute = 1] (0:0:1 - 3)
		IfNotBlocked
		reached[0][10] = 1;
		(trpt+1)->bup.oval = ((int)execute);
		execute = 1;
#ifdef VAR_RANGES
		logval("execute", ((int)execute));
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 18: // STATE 11 - number1.pml:19 - [printf('state of thread 1 %d',execute)] (0:0:0 - 1)
		IfNotBlocked
		reached[0][11] = 1;
		Printf("state of thread 1 %d", ((int)execute));
		_m = 3; goto P999; /* 0 */
	case 19: // STATE 12 - number1.pml:20 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[0][12] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */
	case  _T5:	/* np_ */
		if (!((!(trpt->o_pm&4) && !(trpt->tau&128))))
			continue;
		/* else fall through */
	case  _T2:	/* true */
		_m = 3; goto P999;
#undef rand
	}

