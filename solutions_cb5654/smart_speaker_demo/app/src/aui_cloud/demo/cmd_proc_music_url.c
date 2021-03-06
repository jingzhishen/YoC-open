/*
 * Copyright (C) 2019-2020 Alibaba Group Holding Limited
 */
#include "aui_nlp.h"

#define TAG "app"

/**
 * 音乐搜索返回结果处理，获取URL直接播放
*/
int aui_nlp_process_music_url(cJSON *js, const char *json_text)
{
    LOGD(TAG, "Enter %s", __FUNCTION__);

    cJSON *music_url = cJSON_GetObjectItemByPath(js, "music::url");

    if (!cJSON_IsString(music_url)) {
        LOGD(TAG, "type mismatch");
        return -1;
    }

    //LOGD(TAG, "process_music_url:%s", music_url->valuestring);

    if (strlen(music_url->valuestring) < 1) {
        return -2;
    }

    aui_player_stop(MEDIA_MUSIC);
    aui_player_play(MEDIA_MUSIC, music_url->valuestring, 0);

    return 0;
}
