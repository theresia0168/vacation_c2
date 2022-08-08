#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>

void scan_dir(char *path);

int main(int argc, char *argv[])
{
	scan_dir(".");
	
	getch();
	return 0;
}

void scan_dir(char *path){
	DIR *d;
	struct dirent *ent;
	struct stat st;
	char buf[256];
	
	printf("\n*** OPEN %s\n", path);
	d = opendir(path);
	
	while((ent = readdir(d)) != NULL){
		if((strcmp(ent->d_name, ".")==0)||(strcmp(ent->d_name, "..")==0))
			continue;
			//printf("<--skip");
		
		//printf("%s", ent->d_name);
		
		sprintf(buf, "%s/%s", path, ent->d_name);
		stat(buf, &st);
		if(S_ISDIR(st.st_mode)){
			//printf("<--DIR");
			scan_dir(buf);	// 새로운 경로. 기존 경로 + 디렉토리 이름 
		}
		else if(S_ISREG(st.st_mode)){
			// 파일 끝 확장자가 ".exe" 파일의 끝에 "<--" 표시
			printf("%s", ent->d_name); 
			if(strcmp(strchr(ent->d_name, '.'), ".exe") == 0)
				printf("<<--");
		}
			
		printf("\n");
	}
	
	closedir(d);
}
