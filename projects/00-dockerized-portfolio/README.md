# Project 0: Dockerized Gaming Portfolio Application

## 📋 Project Overview

A fully containerized multiplayer gaming application built with React (Vite) frontend and Django backend, featuring real-time gameplay, user authentication, tournaments, and WebSocket communication. This project demonstrates modern DevOps practices through Docker containerization and multi-service orchestration.

## 🛠️ Technical Stack & Tools

- **Frontend**: React.js 18+ with Vite build tool, Bootstrap UI, Three.js for 3D graphics
- **Backend**: Django 5.1+ REST API with Django Channels for WebSockets
- **Database**: PostgreSQL for persistent data storage
- **Cache & Message Broker**: Redis for WebSocket channel layers and caching
- **Authentication**: JWT tokens with SimpleJWT, OAuth integration, 2FA support
- **Real-time Communication**: WebSocket connections via Django Channels
- **Containerization**: Docker, Docker Compose with multi-service orchestration
- **Web Server**: Nginx reverse proxy for production-ready setup
- **Internationalization**: i18next for multi-language support

## 🏗️ Architecture

```
┌─────────────────┐    ┌─────────────────┐    ┌─────────────────┐    ┌─────────────────┐
│     Nginx       │    │   React/Vite    │    │     Django      │    │   PostgreSQL    │
│  Reverse Proxy  │◄──►│   (Frontend)    │◄──►│   REST API      │◄──►│   (Database)    │
│  Ports: 80/443  │    │   Port: 3000    │    │   Port: 8000    │    │   Port: 5432    │
└─────────────────┘    └─────────────────┘    └─────────────────┘    └─────────────────┘
                                              │                                       │
                                              ▼                                       │
                                       ┌─────────────────┐                           │
                                       │      Redis      │                           │
                                       │ Cache & Channels│◄──────────────────────────┘
                                       │   Port: 6379    │
                                       └─────────────────┘
```

## 📁 Project Structure

```
projects/00-dockerized-portfolio/
├── README.md
├── docker-compose.yml
├── docker-compose-test.yml
├── Makefile
├── .dockerignore
├── .gitignore
├── front-react/                    # React frontend with Vite
│   ├── Dockerfile
│   ├── package.json
│   ├── vite.config.js
│   └── src/
│       ├── game_jsx/              # Game logic components
│       ├── shaders/               # WebGL shaders
│       ├── translations/          # i18n language files
│       └── [40+ React components] # Authentication, UI, game features
├── backend/                        # Django backend
│   ├── dockerfile
│   ├── requirements.txt
│   ├── manage.py
│   ├── backend/                   # Core Django configuration
│   │   ├── settings.py
│   │   ├── asgi.py               # ASGI config for WebSockets
│   │   ├── consumers.py          # WebSocket consumers
│   │   └── routing.py            # WebSocket URL routing
│   ├── users/                    # User management app
│   ├── gameinfo/                 # Game statistics app
│   ├── friends/                  # Friend system app
│   ├── tournaments/              # Tournament management app
│   └── chat/                     # Real-time chat app
├── nginx/                         # Reverse proxy configuration
│   ├── Dockerfile
│   └── nginx.conf
└── postgres_data/                 # Database volume mount
```

## ⚡ Setup & Usage Instructions

### Prerequisites
- Docker Engine 20.10+
- Docker Compose 2.0+

### Environment Configuration
Create a `.env` file in the project root with:
```env
DOMAIN=localhost
OAUTH_UID=your_oauth_client_id
OAUTH_SECRET=your_oauth_secret
OAUTH_CALLBACK=your_callback_url
DBNAME=transcendance_db
DBUSER=django_user
DBPASSWORD=secure_password
VOLUME_PATH=./front-react
```

### Quick Start
```bash
# Clone the repository
git clone <repository-url>
cd projects/00-dockerized-portfolio

# Build and run all services
docker-compose up --build

# Access the application
# Main App: http://localhost:1080 (HTTP) or https://localhost:1443 (HTTPS)
# Django Admin: http://localhost:1080/admin/
# Redis: localhost:7777
```

### Development Commands
```bash
# Run development setup
make up

# Run tests
docker-compose -f docker-compose-test.yml up --build

# View logs for specific service
docker-compose logs -f backend
docker-compose logs -f frontend

# Execute commands in containers
docker-compose exec backend python manage.py shell
docker-compose exec frontend npm run lint

# Clean up containers and volumes
make down
docker-compose down -v
```

## 🔧 Configuration

### Environment Variables
- `DOMAIN`: Your domain name (default: localhost)
- `OAUTH_UID/SECRET/CALLBACK`: OAuth authentication configuration
- `DBNAME/DBUSER/DBPASSWORD`: PostgreSQL database credentials
- `VOLUME_PATH`: Frontend source code volume path

### Docker Services
- **nginx**: Reverse proxy (Alpine-based, ~15MB)
- **frontend**: React/Vite development server (Node 18 Alpine, ~200MB)
- **backend**: Django with Daphne ASGI server (Python 3.10 Alpine, ~180MB)
- **postgres**: PostgreSQL database (official image, ~150MB)
- **redis**: Redis cache and message broker (Alpine, ~30MB)

## 🎮 Application Features

### Core Gaming Features
- **Real-time multiplayer gaming** with WebSocket communication
- **Tournament system** with bracket management and spectator mode
- **3D game graphics** powered by Three.js and WebGL shaders
- **Player statistics** and leaderboards
- **Real-time chat** during gameplay

### User Management
- **JWT Authentication** with access/refresh token rotation
- **OAuth integration** for social login
- **Two-Factor Authentication (2FA)** for enhanced security
- **User profiles** with avatar upload and statistics
- **Friend system** with real-time friend requests and status

### Technical Features
- **Multi-language support** (i18n) with language detection
- **Responsive design** using Bootstrap and custom SCSS
- **WebSocket real-time communication** for all interactive features
- **Redis caching** for performance optimization
- **PostgreSQL database** with proper migrations and relationships

## 💡 Key Learnings & Challenges

### Docker & DevOps Mastered
- **Multi-service orchestration** with Docker Compose
- **Container networking** between frontend, backend, database, and cache
- **Volume management** for data persistence and development
- **Environment variable handling** across multiple containers
- **Production-ready setup** with Nginx reverse proxy

### Challenges Overcome
- **WebSocket configuration** in containerized environment
- **CORS and CSRF handling** for cross-origin requests
- **Database migrations** in multi-container setup
- **Real-time communication** between React frontend and Django Channels
- **Development vs production** Docker configurations

### Architecture Decisions
- **Microservices approach** with separated concerns
- **ASGI server (Daphne)** for WebSocket and HTTP handling
- **Alpine Linux base images** for reduced image sizes
- **Redis integration** for both caching and WebSocket channels
- **JWT token management** with secure refresh mechanisms

## 🔗 Links to Resources & References

- [Django Channels Documentation](https://channels.readthedocs.io/)
- [Docker Compose Multi-Service Setup](https://docs.docker.com/compose/)
- [Vite Build Tool](https://vitejs.dev/)
- [Three.js 3D Graphics](https://threejs.org/)
- [JWT Authentication Best Practices](https://auth0.com/blog/a-look-at-the-latest-draft-for-jwt-bcp/)

## 📈 Success Metrics

- ✅ Full-stack application with real-time features
- ✅ Multi-container orchestration with 5 services
- ✅ Production-ready reverse proxy setup
- ✅ WebSocket communication working in containers
- ✅ Database persistence and migrations
- ✅ Authentication and authorization system
- ✅ 3D graphics and game engine integration
- ✅ Internationalization support
- ✅ Development hot-reload for both frontend and backend