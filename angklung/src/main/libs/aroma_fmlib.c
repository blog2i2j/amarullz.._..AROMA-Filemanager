/*
 * Copyright (C) 2011 Ahmad Amarullah ( http://amarullz.com/ )
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */  
    
/*
 * Descriptions:
 * -------------
 * AROMA File Manager Main LIB
 *
 */ 
void aw_menuset(AWMENUITEMP mi, int id, char *title_id, int ico_id)
{
	
	

{
	
		
	
	else if (val > 1024)
		
	
	else
		
	



//* 
//* Expand Path Size
//*
void aui_setpath(char **buf, char *pre, char *post, byte addslash)
{
	
	
	
	
	
		  ((pre == NULL) ? "" : pre), ((post == NULL) ? "" : post));
	
		free(*buf);
	



//* 
//* Read Strings From filesystem
//* 
char *aui_readfromfs(char *name)
{
	
	
	
		return NULL;
	
		return NULL;
	
	
		goto done;
	
	
		goto done;
	
		
		
	
	
	
	
 
	



//* 
//* Write Strings into file
//* 
void aui_writetofs(char *name, char *value)
{
	
	
		
		
	



//* 
//* Read Strings From Temporary File
//*
char *aui_readfromtmp(char *name)
{
	
	
	


//* 
//* Write Strings From Temporary File
//*
void aui_writetotmp(char *name, char *value)
{
	
	
	


//* 
//* Read Strings From ZIP
//* 
char *aui_readfromzip(char *name)
{
	
	
		return NULL;
	



//* 
//* Parse PROP String
//* 
char *aui_parsepropstring(char *bf, char *key)
{
	
	
		return result;
	
	
	
	do {
		
			++line;
		
			continue;
		
		
			goto done;
		
		
			--key_end;
		
		
			continue;
		
		
			++val_start;
		
		
			--val_end;
		
		
		
	
	while ((line = strtok(NULL, "\n")));
	
 



//* 
//* Parse PROP Files
//* 
char *aui_parseprop(char *filename, char *key)
{
	
	
	
	



//* 
//* Parse PROP from ZIP
//* 
char *aui_parsepropzip(char *filename, char *key)
{
	
	
	
	



//* 
//* Read Variable
//* 
char *aui_getvar(char *name)
{
	
	
	



//* 
//* Set Variable
//* 
void aui_setvar(char *name, char *value)
{
	
	
	


//* 
//* Append Variable
//* 
void aui_appendvar(char *name, char *value)
{
	
	
	
	
		
		
	



//* 
//* Delete Variable
//* 
void aui_delvar(char *name)
{
	
	
	


//* 
//* Prepend Variable
//* 
void aui_prependvar(char *name, char *value)
{
	
	
	
	
	
		
		
			
		
		
	
	
		
	



//* 
//* Set Colorset From Prop String
//* 
void aui_setthemecolor(char *prop, char *key, color * cl)
{
	
	
		
		
	



//* 
//* Set Drawing Config From Prop String
//* 
void aui_setthemeconfig(char *prop, char *key, byte * b)
{
	
	
		
		
	



{
	
	
		return strdup(str);
	
	
	
	
	
	
		
			
			
			
				
					  str[2], basestr);
			
			else
				
			
		
	
	
		basepos = 50;
	
	do {
		
			break;
		
		
		
		
		
		
	
	while (clen >= maxw);
	


