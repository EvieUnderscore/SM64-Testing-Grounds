void bhv_moving_platform(void) {
    switch (o->oAction) {
        case 0:
            o->oPosY += 10.0;
            if (o->oPosY >= (o->oHomeY + 300.0)) {
                o->oAction = 1;
            }
        break;

        case 1:
            o->oPosY -= 10.0;
            if (o->oPosY <= (o->oHomeY)) {
                o->oAction = 0;
            }
        break;
    }
}