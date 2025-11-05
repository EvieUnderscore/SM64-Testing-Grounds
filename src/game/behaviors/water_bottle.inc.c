void bhv_waterbottle_init(void) {
    o->oMoveAnglePitch = -0x4000;
    o->oGravity = 3.0f;
    o->oFriction = 1.0f;
    o->oBuoyancy = 1.0f;
}

void bhv_waterbottle_interact(void) {
    if (obj_check_if_collided_with_object(o, gMarioObject)) {
        play_sound(SOUND_GENERAL_COLLECT_1UP, gGlobalSoundSource);
        
        //o->oMarioHoldingWaterBottle = TRUE;
        gMarioHoldingBottle = TRUE;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        //gMarioState->flags = 
    }
}


void bhv_waterbottle_loop(void) {
    bhv_waterbottle_interact();
    set_object_visibility(o, 3000);

    o->oAngleVelYaw   = 0x200;
    o->oMoveAngleYaw += 0x400;;

}