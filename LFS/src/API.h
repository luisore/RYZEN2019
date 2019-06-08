#ifndef API_H_
	#define API_H_

		#include <stdio.h>
		#include <string.h>
		#include <stdlib.h>
		#include <unistd.h>
		#include <commons/string.h>
		#include <errno.h>
		#include <time.h>

		#include "shared/utils.h"
		#include "config/config_LFS.h"

		#define TABLES_FOLDER "tables/"

		void consola_procesar_comando(char*);
		void procesar_insert(int, char** , char*);
		int file_write_key_value (char*, char*, char*, char*);
		char* extract_value_from_key(char*, char*);
		void procesar_select(char**);


		const char* folder_path;

#endif /* API_H_ */