#ifndef UPLAY_H
#define UPLAY_H		1

/// Definitions
#define DEFAULT_FORMAT		SND_PCM_FORMAT_S16_LE
#define DEFAULT_SPEED 		16000
#define DEFAULT_CHANNEL		2

#define FORMAT_RAW		0
#define FORMAT_VOC		1
#define FORMAT_WAVE		2
#define FORMAT_AU		3
#define FORMAT_DEFAULT		FORMAT_RAW

/// Global Funtions
void capture(char *filename);
int create_path(const char *path);

void signal_handler_recycle (int sig);

ssize_t pcm_write(u_char *data, size_t count);

int urecord_main(int argc, char *argv[], char *pcm_name,
	snd_pcm_format_t format, unsigned int channels, unsigned int rate);
void prg_exit(int code);

#endif				/* UPLAY */
