# Dwm 

![Dwm_](https://github.com/user-attachments/assets/9a7bcb14-473a-475b-b4c5-e3476c606eb1)

# Setup basic dwm
arch:
``` bash
sudo pacman -S make gcc libx11 libxft libxinerama
```
debian:
``` bash
sudo apt install make gcc libx11-dev libxft-dev libxinerama-dev
```

make
``` bash
cd .config/dwm-fabio
```

``` bash
sudo make && make clean install
```

``` bash
cd dwmblocks
```

``` bash
sudo make && make clean install
```

``` bash
cd dmenu
```

``` bash
sudo make && make clean install
```
 
create autostart.sh
``` bash
cd && mkdir .dwm && cd .dwm && touch autostart.sh && echo '#!/bin/bash

dwmblocks &
' > autostart.sh && chmod +x autostart.sh
```

create dwm.desktop
```
[Desktop Entry]                                                 
Name=dwm                                                        
Comment=suckless tiling window manager                          
Exec=dwm
TryExec=dwm                                                     
Type=Application                                                
X-LightDM-DesktopName=dwm                                       
DesktopNames=dwm                                                
Keywords=tiling;wm;manager;                                     
                                         
```

<hr>

# Hyperland

https://github.com/user-attachments/assets/eb86c991-049f-4c18-8555-5d02338674b8

## Guia Básico de Comandos Úteis para Arch Linux

Este guia é destinado a usuários que estão migrando do Debian para o Arch Linux e precisam se familiarizar com os comandos básicos.

## 1. Atualização do Sistema

- **Debian:** 
  ```bash
  sudo apt update && sudo apt upgrade
  ```
- **Arch:**
  ``` bash
  sudo pacman -Syu
  ```

## 2. Instalação de Pacotes

- **Debian:** 
  ```bash
  sudo apt install <package_name>
  ```
- **Arch:**
  ``` bash
  sudo pacman -S <package_name>
  ```

## 3. Remoção de Pacotes

- **Debian:** 
  ```bash
  sudo apt remove <package_name>
  ```
- **Arch:**
  ``` bash
    sudo pacman -R <package_name>
  ```
 
4. Pesquisa de Pacotes

    Debian:

    bash

apt search <package_name>

Arch:

bash

    pacman -Ss <package_name>

5. Informações sobre um Pacote

    Debian:

    bash

apt show <package_name>

Arch:

bash

    pacman -Si <package_name>

6. Limpeza de Pacotes Órfãos

    Debian:

    bash

sudo apt autoremove

Arch:

bash

    sudo pacman -Rns $(pacman -Qdtq)

7. Gerenciamento de Espelhos

    Debian:
        Arquivo: /etc/apt/sources.list
    Arch:
        Arquivo: /etc/pacman.d/mirrorlist

8. Gerenciamento de Pacotes AUR

    Para gerenciar pacotes do AUR, você pode usar ferramentas como yay ou paru.

    bash

    yay -S <aur_package_name>

9. Verificação de Pacotes Instalados

    Debian:

    bash

dpkg -l

Arch:

bash

    pacman -Q

10. Atualizar o mirrorlist

    Arch:

    bash

    sudo reflector --latest 10 --sort rate --save /etc/pacman.d/mirrorlist

