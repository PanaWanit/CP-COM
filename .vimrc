source $VIMRUNTIME/vimrc_example.vim

set termguicolors
colo delek-nobold
set cb=unnamed
set number
set relativenumber
set gfn=8514oem:h30
map <F8> :set gfn=Fira\ Code:h12<CR>
map <F6> :set gfn=8514oem:h12<CR>
map <F7> :set gfn=Fixedsys:h20<CR>
nnoremap <C-O> :browse confirm e<CR>
"Complier C++
cd C:\Users\haich\OneDrive\Desktop\Code_C++\vmcpp
autocmd filetype cpp nnoremap <F9> :w <CR> :!g++ -Wall -std=c++17 % -o %:t:r -DLOCAL -Wl,--stack,268435456<CR>
autocmd filetype cpp nnoremap <F10> :!%:t:r<CR>
augroup numbertoggle
    autocmd!
    autocmd BufEnter,FocusGained,InsertLeave * set rnu
    autocmd BufLeave,FocusLost,InsertEnter * set nornu
augroup END
autocmd GUIEnter * :sim ~x 
set belloff=all
inoremap { {}<Left>
inoremap {<CR>  {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}
set nobackup
set noundofile
set ts=4
set sw=4
set hls
set si
set is
set noswapfile
"

if &diffopt !~# 'internal'
  set diffexpr=MyDiff()
endif
function MyDiff()
  let opt = '-a --binary '
  if &diffopt =~ 'icase' | let opt = opt . '-i ' | endif
  if &diffopt =~ 'iwhite' | let opt = opt . '-b ' | endif
  let arg1 = v:fname_in
  if arg1 =~ ' ' | let arg1 = '"' . arg1 . '"' | endif
  let arg1 = substitute(arg1, '!', '\!', 'g')
  let arg2 = v:fname_new
  if arg2 =~ ' ' | let arg2 = '"' . arg2 . '"' | endif
  let arg2 = substitute(arg2, '!', '\!', 'g')
  let arg3 = v:fname_out
  if arg3 =~ ' ' | let arg3 = '"' . arg3 . '"' | endif
  let arg3 = substitute(arg3, '!', '\!', 'g')
  if $VIMRUNTIME =~ ' '
    if &sh =~ '\<cmd'
      if empty(&shellxquote)
        let l:shxq_sav = ''
        set shellxquote&
      endif
      let cmd = '"' . $VIMRUNTIME . '\diff"'
    else
      let cmd = substitute($VIMRUNTIME, ' ', '" ', '') . '\diff"'
    endif
  else
    let cmd = $VIMRUNTIME . '\diff'
  endif
  let cmd = substitute(cmd, '!', '\!', 'g')
  silent execute '!' . cmd . ' ' . opt . arg1 . ' ' . arg2 . ' > ' . arg3
  if exists('l:shxq_sav')
    let &shellxquote=l:shxq_sav
  endif
endfunction

