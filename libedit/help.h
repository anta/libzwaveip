/* Automatically generated file, do not edit */
static const struct el_bindings_t el_func_help[] = {
    { L"vi-paste-next",              VI_PASTE_NEXT,                
      L"Vi paste previous deletion to the right of the cursor" },
    { L"vi-paste-prev",              VI_PASTE_PREV,                
      L"Vi paste previous deletion to the left of the cursor" },
    { L"vi-prev-big-word",           VI_PREV_BIG_WORD,             
      L"Vi move to the previous space delimited word" },
    { L"vi-prev-word",               VI_PREV_WORD,                 
      L"Vi move to the previous word" },
    { L"vi-next-big-word",           VI_NEXT_BIG_WORD,             
      L"Vi move to the next space delimited word" },
    { L"vi-next-word",               VI_NEXT_WORD,                 
      L"Vi move to the next word" },
    { L"vi-change-case",             VI_CHANGE_CASE,               
      L"Vi change case of character under the cursor and advance one character" },
    { L"vi-change-meta",             VI_CHANGE_META,               
      L"Vi change prefix command" },
    { L"vi-insert-at-bol",           VI_INSERT_AT_BOL,             
      L"Vi enter insert mode at the beginning of line" },
    { L"vi-replace-char",            VI_REPLACE_CHAR,              
      L"Vi replace character under the cursor with the next character typed" },
    { L"vi-replace-mode",            VI_REPLACE_MODE,              
      L"Vi enter replace mode" },
    { L"vi-substitute-char",         VI_SUBSTITUTE_CHAR,           
      L"Vi replace character under the cursor and enter insert mode" },
    { L"vi-substitute-line",         VI_SUBSTITUTE_LINE,           
      L"Vi substitute entire line" },
    { L"vi-change-to-eol",           VI_CHANGE_TO_EOL,             
      L"Vi change to end of line" },
    { L"vi-insert",                  VI_INSERT,                    
      L"Vi enter insert mode" },
    { L"vi-add",                     VI_ADD,                       
      L"Vi enter insert mode after the cursor" },
    { L"vi-add-at-eol",              VI_ADD_AT_EOL,                
      L"Vi enter insert mode at end of line" },
    { L"vi-delete-meta",             VI_DELETE_META,               
      L"Vi delete prefix command" },
    { L"vi-end-big-word",            VI_END_BIG_WORD,              
      L"Vi move to the end of the current space delimited word" },
    { L"vi-end-word",                VI_END_WORD,                  
      L"Vi move to the end of the current word" },
    { L"vi-undo",                    VI_UNDO,                      
      L"Vi undo last change" },
    { L"vi-command-mode",            VI_COMMAND_MODE,              
      L"Vi enter command mode (use alternative key bindings)" },
    { L"vi-zero",                    VI_ZERO,                      
      L"Vi move to the beginning of line" },
    { L"vi-delete-prev-char",        VI_DELETE_PREV_CHAR,          
      L"Vi move to previous character (backspace)" },
    { L"vi-list-or-eof",             VI_LIST_OR_EOF,               
      L"Vi list choices for completion or indicate end of file if empty line" },
    { L"vi-kill-line-prev",          VI_KILL_LINE_PREV,            
      L"Vi cut from beginning of line to cursor" },
    { L"vi-search-prev",             VI_SEARCH_PREV,               
      L"Vi search history previous" },
    { L"vi-search-next",             VI_SEARCH_NEXT,               
      L"Vi search history next" },
    { L"vi-repeat-search-next",      VI_REPEAT_SEARCH_NEXT,        
      L"Vi repeat current search in the same search direction" },
    { L"vi-repeat-search-prev",      VI_REPEAT_SEARCH_PREV,        
      L"Vi repeat current search in the opposite search direction" },
    { L"vi-next-char",               VI_NEXT_CHAR,                 
      L"Vi move to the character specified next" },
    { L"vi-prev-char",               VI_PREV_CHAR,                 
      L"Vi move to the character specified previous" },
    { L"vi-to-next-char",            VI_TO_NEXT_CHAR,              
      L"Vi move up to the character specified next" },
    { L"vi-to-prev-char",            VI_TO_PREV_CHAR,              
      L"Vi move up to the character specified previous" },
    { L"vi-repeat-next-char",        VI_REPEAT_NEXT_CHAR,          
      L"Vi repeat current character search in the same search direction" },
    { L"vi-repeat-prev-char",        VI_REPEAT_PREV_CHAR,          
      L"Vi repeat current character search in the opposite search direction" },
    { L"vi-match",                   VI_MATCH,                     
      L"Vi go to matching () {} or []" },
    { L"vi-undo-line",               VI_UNDO_LINE,                 
      L"Vi undo all changes to line" },
    { L"vi-to-column",               VI_TO_COLUMN,                 
      L"Vi go to specified column" },
    { L"vi-yank-end",                VI_YANK_END,                  
      L"Vi yank to end of line" },
    { L"vi-yank",                    VI_YANK,                      
      L"Vi yank" },
    { L"vi-comment-out",             VI_COMMENT_OUT,               
      L"Vi comment out current command" },
    { L"vi-alias",                   VI_ALIAS,                     
      L"Vi include shell alias" },
    { L"vi-to-history-line",         VI_TO_HISTORY_LINE,           
      L"Vi go to specified history file line." },
    { L"vi-histedit",                VI_HISTEDIT,                  
      L"Vi edit history line with vi" },
    { L"vi-history-word",            VI_HISTORY_WORD,              
      L"Vi append word from previous input line" },
    { L"vi-redo",                    VI_REDO,                      
      L"Vi redo last non-motion command" },
    { L"em-delete-or-list",          EM_DELETE_OR_LIST,            
      L"Delete character under cursor or list completions if at end of line" },
    { L"em-delete-next-word",        EM_DELETE_NEXT_WORD,          
      L"Cut from cursor to end of current word" },
    { L"em-yank",                    EM_YANK,                      
      L"Paste cut buffer at cursor position" },
    { L"em-kill-line",               EM_KILL_LINE,                 
      L"Cut the entire line and save in cut buffer" },
    { L"em-kill-region",             EM_KILL_REGION,               
      L"Cut area between mark and cursor and save in cut buffer" },
    { L"em-copy-region",             EM_COPY_REGION,               
      L"Copy area between mark and cursor to cut buffer" },
    { L"em-gosmacs-transpose",       EM_GOSMACS_TRANSPOSE,         
      L"Exchange the two characters before the cursor" },
    { L"em-next-word",               EM_NEXT_WORD,                 
      L"Move next to end of current word" },
    { L"em-upper-case",              EM_UPPER_CASE,                
      L"Uppercase the characters from cursor to end of current word" },
    { L"em-capitol-case",            EM_CAPITOL_CASE,              
      L"Capitalize the characters from cursor to end of current word" },
    { L"em-lower-case",              EM_LOWER_CASE,                
      L"Lowercase the characters from cursor to end of current word" },
    { L"em-set-mark",                EM_SET_MARK,                  
      L"Set the mark at cursor" },
    { L"em-exchange-mark",           EM_EXCHANGE_MARK,             
      L"Exchange the cursor and mark" },
    { L"em-universal-argument",      EM_UNIVERSAL_ARGUMENT,        
      L"Universal argument (argument times 4)" },
    { L"em-meta-next",               EM_META_NEXT,                 
      L"Add 8th bit to next character typed" },
    { L"em-toggle-overwrite",        EM_TOGGLE_OVERWRITE,          
      L"Switch from insert to overwrite mode or vice versa" },
    { L"em-copy-prev-word",          EM_COPY_PREV_WORD,            
      L"Copy current word to cursor" },
    { L"em-inc-search-next",         EM_INC_SEARCH_NEXT,           
      L"Emacs incremental next search" },
    { L"em-inc-search-prev",         EM_INC_SEARCH_PREV,           
      L"Emacs incremental reverse search" },
    { L"em-delete-prev-char",        EM_DELETE_PREV_CHAR,          
      L"Delete the character to the left of the cursor" },
    { L"ed-end-of-file",             ED_END_OF_FILE,               
      L"Indicate end of file" },
    { L"ed-insert",                  ED_INSERT,                    
      L"Add character to the line" },
    { L"ed-delete-prev-word",        ED_DELETE_PREV_WORD,          
      L"Delete from beginning of current word to cursor" },
    { L"ed-delete-next-char",        ED_DELETE_NEXT_CHAR,          
      L"Delete character under cursor" },
    { L"ed-kill-line",               ED_KILL_LINE,                 
      L"Cut to the end of line" },
    { L"ed-move-to-end",             ED_MOVE_TO_END,               
      L"Move cursor to the end of line" },
    { L"ed-move-to-beg",             ED_MOVE_TO_BEG,               
      L"Move cursor to the beginning of line" },
    { L"ed-transpose-chars",         ED_TRANSPOSE_CHARS,           
      L"Exchange the character to the left of the cursor with the one under it" },
    { L"ed-next-char",               ED_NEXT_CHAR,                 
      L"Move to the right one character" },
    { L"ed-prev-word",               ED_PREV_WORD,                 
      L"Move to the beginning of the current word" },
    { L"ed-prev-char",               ED_PREV_CHAR,                 
      L"Move to the left one character" },
    { L"ed-quoted-insert",           ED_QUOTED_INSERT,             
      L"Add the next character typed verbatim" },
    { L"ed-digit",                   ED_DIGIT,                     
      L"Adds to argument or enters a digit" },
    { L"ed-argument-digit",          ED_ARGUMENT_DIGIT,            
      L"Digit that starts argument" },
    { L"ed-unassigned",              ED_UNASSIGNED,                
      L"Indicates unbound character" },
    { L"ed-ignore",                  ED_IGNORE,                    
      L"Input characters that have no effect" },
    { L"ed-newline",                 ED_NEWLINE,                   
      L"Execute command" },
    { L"ed-delete-prev-char",        ED_DELETE_PREV_CHAR,          
      L"Delete the character to the left of the cursor" },
    { L"ed-clear-screen",            ED_CLEAR_SCREEN,              
      L"Clear screen leaving current line at the top" },
    { L"ed-redisplay",               ED_REDISPLAY,                 
      L"Redisplay everything" },
    { L"ed-start-over",              ED_START_OVER,                
      L"Erase current line and start from scratch" },
    { L"ed-sequence-lead-in",        ED_SEQUENCE_LEAD_IN,          
      L"First character in a bound sequence" },
    { L"ed-prev-history",            ED_PREV_HISTORY,              
      L"Move to the previous history line" },
    { L"ed-next-history",            ED_NEXT_HISTORY,              
      L"Move to the next history line" },
    { L"ed-search-prev-history",     ED_SEARCH_PREV_HISTORY,       
      L"Search previous in history for a line matching the current" },
    { L"ed-search-next-history",     ED_SEARCH_NEXT_HISTORY,       
      L"Search next in history for a line matching the current" },
    { L"ed-prev-line",               ED_PREV_LINE,                 
      L"Move up one line" },
    { L"ed-next-line",               ED_NEXT_LINE,                 
      L"Move down one line" },
    { L"ed-command",                 ED_COMMAND,                   
      L"Editline extended command" },
};
