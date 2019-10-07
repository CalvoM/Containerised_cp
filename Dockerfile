
FROM gcc:latest

COPY . /usr/src/myapp
WORKDIR /usr/src/myapp

RUN g++ -o main *.cpp -I ./includes/

CMD ["./main"]

LABEL Name=C++_App
