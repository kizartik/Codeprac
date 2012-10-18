/*
 *  fact.h
 *  Pj_Eu_1
 *
 *  Created by Kizartik on 10/17/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */



int Ffact( int nin)
{
    unsigned int output = 0;
    if (nin > 1)
    {
        output = Ffact(1 + nin + (nin-1));
    }
    return output;
}
