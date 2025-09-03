# Project 0: Dockerized Portfolio Application

## 📋 Project Overview

A containerized React/Node.js portfolio application showcasing DevOps fundamentals through Docker containerization and multi-service orchestration.

## 🛠️ Technical Stack & Tools

- **Frontend**: React.js with modern UI components
- **Backend**: Node.js Express API
- **Database**: PostgreSQL
- **Containerization**: Docker, Docker Compose
- **Image Optimization**: Multi-stage builds, Alpine Linux
- **Networking**: Container networking, port mapping
- **Storage**: Docker volumes for data persistence

## 🏗️ Architecture

```
┌─────────────────┐    ┌─────────────────┐    ┌─────────────────┐
│   React App     │    │   Node.js API   │    │   PostgreSQL    │
│   (Frontend)    │◄──►│   (Backend)     │◄──►│   (Database)    │
│   Port: 3000    │    │   Port: 5000    │    │   Port: 5432    │
└─────────────────┘    └─────────────────┘    └─────────────────┘
```

## 📁 Project Structure

```
projects/00-dockerized-portfolio/
├── README.md
├── docker-compose.yml
├── .dockerignore
├── frontend/
│   ├── Dockerfile
│   ├── package.json
│   ├── src/
│   └── public/
├── backend/
│   ├── Dockerfile
│   ├── package.json
│   ├── src/
│   └── config/
└── database/
    └── init.sql
```

## ⚡ Setup & Usage Instructions

### Prerequisites
- Docker Engine 20.10+
- Docker Compose 2.0+

### Quick Start
```bash
# Clone the repository
git clone <repository-url>
cd projects/00-dockerized-portfolio

# Build and run all services
docker-compose up --build

# Access applications
# Frontend: http://localhost:3000
# Backend API: http://localhost:5000
# Database: localhost:5432
```

### Development Commands
```bash
# Run in development mode with hot reload
docker-compose -f docker-compose.dev.yml up

# View logs
docker-compose logs -f

# Execute commands in containers
docker-compose exec backend npm test
docker-compose exec frontend npm run lint

# Clean up
docker-compose down -v
```

## 🔧 Configuration

### Environment Variables
- `NODE_ENV`: Development/production mode
- `DATABASE_URL`: PostgreSQL connection string
- `API_PORT`: Backend server port (default: 5000)
- `FRONTEND_PORT`: Frontend dev server port (default: 3000)

### Docker Image Optimization
- Multi-stage builds for production images
- Alpine Linux base images (< 100MB total)
- Layer caching optimization
- Non-root user security

## 💡 Key Learnings & Challenges

### Docker Fundamentals Mastered
- Multi-stage Dockerfile optimization
- Container networking and communication
- Volume management for data persistence
- Environment-specific configurations

### Challenges Overcome
- Image size optimization (reduced from 800MB to 95MB)
- Container startup dependencies and health checks
- Development vs production configuration management
- Database initialization and seed data

### Best Practices Implemented
- Security: Non-root containers, minimal base images
- Performance: Layer caching, multi-stage builds
- Maintainability: Clear documentation, structured configs
- Development: Hot reload, easy debugging setup

## 🔗 Links to Resources & References

- [Docker Best Practices](https://docs.docker.com/develop/best-practices/)
- [Multi-stage Builds Guide](https://docs.docker.com/develop/dev-best-practices/)
- [Docker Compose Documentation](https://docs.docker.com/compose/)
- [Container Security Guidelines](https://docs.docker.com/engine/security/)

## 📈 Success Metrics

- ✅ Application runs in containers successfully
- ✅ Total image size < 100MB
- ✅ Development setup with hot reload
- ✅ Production-ready multi-stage builds
- ✅ Proper container networking configured
- ✅ Data persistence with volumes
- ✅ Health checks and graceful shutdown