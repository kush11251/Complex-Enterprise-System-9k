FROM gcc:latest
WORKDIR /app
COPY . .
RUN gcc -o main src/main.c src/controllers/main_controller.c src/services/user_service.c src/models/user.c src/utils/string_utils.c src/adapters/db_adapter.c
CMD ["./main"]