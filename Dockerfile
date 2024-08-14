FROM ubuntu:22.04

RUN DEBIAN_FRONTEND=noninteractive apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    build-essential \
    cmake \
    build-essential \
    libasound2-dev \
    csound \
    wget

RUN wget https://sourceforge.net/projects/xampp/files/XAMPP%20Linux/8.2.12/xampp-linux-x64-8.2.12-0-installer.run/download -O xampp-installer.run
RUN chmod +x xampp-installer.run
RUN ./xampp-installer.run


WORKDIR /bolprocessor/
COPY ./ /bolprocessor/
