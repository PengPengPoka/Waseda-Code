	switch (t->back) {
	default: Uerror("bad return move");
	case  0: goto R999; /* nothing to undo */

		 /* PROC :init: */

	case 3: // STATE 1
		;
		;
		delproc(0, now._nr_pr-1);
		;
		goto R999;

	case 4: // STATE 2
		;
		;
		delproc(0, now._nr_pr-1);
		;
		goto R999;

	case 5: // STATE 3
		;
		;
		delproc(0, now._nr_pr-1);
		;
		goto R999;

	case 6: // STATE 4
		;
		p_restor(II);
		;
		;
		goto R999;

		 /* PROC checkState */
;
		;
		
	case 8: // STATE 2
		;
		p_restor(II);
		;
		;
		goto R999;

		 /* PROC thread2 */
;
		;
		
	case 10: // STATE 3
		;
		now.y = trpt->bup.ovals[1];
		now.x = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 11: // STATE 11
		;
		execute = trpt->bup.oval;
		;
		goto R999;
;
		;
		
	case 13: // STATE 13
		;
		p_restor(II);
		;
		;
		goto R999;

		 /* PROC thread1 */
;
		;
		
	case 15: // STATE 3
		;
		now.y = trpt->bup.ovals[1];
		now.x = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;
;
		;
		
	case 17: // STATE 10
		;
		execute = trpt->bup.oval;
		;
		goto R999;
;
		;
		
	case 19: // STATE 12
		;
		p_restor(II);
		;
		;
		goto R999;
	}

