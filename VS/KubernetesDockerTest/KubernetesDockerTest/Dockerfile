FROM mcr.microsoft.com/dotnet/core/aspnet:3.1 AS base
WORKDIR /app
EXPOSE 80

FROM mcr.microsoft.com/dotnet/core/sdk:3.1 AS build
WORKDIR /src
COPY ["KubernetesDockerTest/KubernetesDockerTest.csproj", "KubernetesDockerTest/"]

RUN dotnet restore "KubernetesDockerTest/KubernetesDockerTest.csproj"
COPY . .
WORKDIR "/src/KubernetesDockerTest"
RUN dotnet build "KubernetesDockerTest.csproj" -c Release -o /app/build

FROM build AS publish
RUN dotnet publish "KubernetesDockerTest.csproj" -c Release -o /app/publish

FROM base AS final
WORKDIR /app
COPY --from=publish /app/publish .
ENTRYPOINT ["dotnet", "KubernetesDockerTest.dll"]