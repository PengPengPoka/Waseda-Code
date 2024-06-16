/* Starts monitoring and accepts crapping hands. */
int start_shrine(){
    init_shrine_counter(); int t;
    while (t < 10){
        if( show_mic_value == 1 ) 
            syslog( LOG_NOTICE, “mic_value: %d”,( AD_0 >> 6 & 0x03FF) );
            if(( AD_0 >> 6 & 0x03FF ) > mic_threshold ) {
                counter++;
                if ( counter == 2 ) {
                    PADR.BIT.B2 = 1; PADR.BIT.B3 = 0;
                }
            }
    else counter = 0;
    if( PADR.BIT.B7 == 0 ) PADR.BIT.B2=PADR.BIT.B3=0;
    tslp_tsk(monitor_period); t++;
 }
}