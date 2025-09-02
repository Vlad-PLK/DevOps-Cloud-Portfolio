# 12-Week DevOps Cloud Engineer Roadmap
*From Software Developer to Freelance DevOps Cloud Engineer*

## Objectif (ce que je deviens en 8 à 12 semaines)
Devenir un DevOps Cloud junior capable de :
- Dockeriser et déployer une application (web ou API) sur AWS avec Terraform (IaC).
- Orchestrer l’app avec Kubernetes (EKS / local k3d/kind), créer pipeline CI/CD (GitHub Actions) pour build → test → deploy.
- Mettre en place monitoring (Prometheus + Grafana), logs basiques, alerting et runbook simple.
- Livrer un POC 3–5 jours pour une PME (pipeline + infra + monitoring) et pouvoir vendre ce POC en freelance.

## Overview
- **Target**: 20-25 hours/week (sustainable pace)
- **Focus**: AWS-first, practical projects, portfolio building
- **End goal**: Ready for freelance DevOps consulting in France

---

## Week 1: Linux Fundamentals & Networking Basics
**Theme**: System Administration Foundation

### Learning Objectives
- Master Linux CLI for daily DevOps tasks
- Understand networking fundamentals
- Set up development environment

### Technical Skills
- **Linux**: File system, permissions, processes, systemd, cron jobs
- **Networking**: TCP/IP, DNS, subnets, ports, firewalls basics
- **SSH**: Key management, config files, tunneling
- **Git**: Advanced workflows, branching strategies, PR reviews

### Hands-on Practice
- Set up Ubuntu/CentOS VM or WSL2
- Practice 50+ CLI commands daily
- Configure SSH keys for GitHub
- Create personal Git workflow template

### Deliverable
- **Personal cheat sheet** (Linux commands + networking concepts)
- **GitHub repo** with Git workflow documentation

### Study Resources
- Linux Academy/A Cloud Guru Linux courses
- "The Linux Command Line" (free online)
- Practice on overthewire.org

---

## Week 2: Docker & Containerization
**Theme**: Application Packaging

### Learning Objectives
- Master Docker fundamentals
- Containerize applications efficiently
- Understand container networking and volumes

### Technical Skills
- **Docker**: Images, Dockerfile best practices, multi-stage builds
- **Networking**: Bridge networks, port mapping, container communication
- **Storage**: Volumes, bind mounts, volume drivers
- **Security**: Image scanning, least privilege, non-root containers

### Hands-on Practice
- Dockerize 3 different app types (web app, API, database)
- Create optimized Dockerfiles (Alpine, multi-stage)
- Set up container networking scenarios
- Practice Docker Compose for multi-service apps

### Deliverable
- **Project 0**: Dockerized portfolio application
  - React/Node.js app with proper Dockerfile
  - Docker Compose with database
  - README with build/run instructions
  - Image size < 100MB

### Study Resources
- Docker official documentation
- "Docker Deep Dive" by Nigel Poulton
- Play with Docker (online labs)

---

## Week 3: AWS Foundations & IAM
**Theme**: Cloud Basics & Security

### Learning Objectives
- Navigate AWS console confidently
- Master IAM (users, roles, policies)
- Understand AWS networking (VPC, subnets, security groups)
- Start AWS certification preparation

### Technical Skills
- **Core Services**: EC2, S3, IAM, VPC, CloudWatch basics
- **Networking**: VPC, subnets, route tables, internet gateways, NAT
- **Security**: IAM policies, MFA, access keys, roles vs users
- **Monitoring**: CloudWatch metrics, logs, basic alarms

### Hands-on Practice
- Create AWS account with billing alerts
- Set up proper IAM structure (no root key usage)
- Launch EC2 instances in custom VPC
- Configure security groups and NACLs
- Practice AWS CLI commands

### Deliverable
- **AWS Account Setup**:
  - Multi-user IAM structure
  - Custom VPC with public/private subnets
  - Documentation of security best practices

### Study Resources
- AWS Free Tier
- A Cloud Guru AWS Solutions Architect course
- AWS documentation (VPC, IAM)

---

## Week 4: Infrastructure as Code (Terraform)
**Theme**: Automation & Repeatability

### Learning Objectives
- Write maintainable Terraform code
- Manage state and backends
- Create reusable modules
- Implement multi-environment patterns

### Technical Skills
- **Terraform**: Providers, resources, variables, outputs, functions
- **State Management**: Remote backends, state locking, workspaces
- **Modules**: Writing, versioning, publishing modules
- **Best Practices**: Directory structure, naming conventions, validation

### Hands-on Practice
- Provision AWS infrastructure (VPC, EC2, S3, RDS)
- Create custom modules for common patterns
- Set up remote state with S3 + DynamoDB
- Implement dev/staging/prod environments

### Deliverable
- **Project 1**: Complete AWS Infrastructure
  - VPC with multi-AZ setup
  - Auto Scaling Group + Load Balancer
  - RDS database with backups
  - Reusable modules
  - Multi-environment configuration

### Study Resources
- HashiCorp Learn Terraform
- "Terraform: Up & Running" by Yevgeniy Brikman
- AWS Provider documentation

---

## Week 5: CI/CD & GitHub Actions
**Theme**: Automation Pipelines

### Learning Objectives
- Build robust CI/CD pipelines
- Automate testing and deployment
- Manage secrets and environments
- Implement GitOps principles

### Technical Skills
- **GitHub Actions**: Workflows, jobs, steps, actions marketplace
- **Pipeline Patterns**: Build, test, security scan, deploy
- **Secrets Management**: GitHub secrets, environment variables
- **Quality Gates**: Automated testing, security scans, approvals

### Hands-on Practice
- Create multi-stage pipelines
- Implement automated testing (unit, integration, security)
- Set up Docker image building and publishing
- Configure deployment to multiple environments

### Deliverable
- **Project 2**: Complete CI/CD Pipeline
  - Automated builds with quality gates
  - Multi-environment deployments
  - Security scanning integration
  - Notification system (Slack/email)
  - Pipeline-as-code documentation

### Study Resources
- GitHub Actions documentation
- "Continuous Delivery" by Jez Humble
- DevOps community best practices

---

## Week 6: Kubernetes Fundamentals
**Theme**: Container Orchestration

### Learning Objectives
- Understand Kubernetes architecture
- Deploy and manage applications
- Configure networking and storage
- Implement basic security

### Technical Skills
- **Core Concepts**: Pods, Deployments, Services, ConfigMaps, Secrets
- **Networking**: Service types, Ingress, Network Policies
- **Storage**: Persistent Volumes, Storage Classes
- **Security**: RBAC, Security Contexts, Pod Security Standards

### Hands-on Practice
- Set up local cluster (kind/k3d)
- Deploy applications with proper resource limits
- Configure ingress with TLS termination
- Implement basic RBAC

### Deliverable
- **Project 3**: Kubernetes Application Deployment
  - Multi-tier application (frontend, backend, database)
  - Ingress with TLS (Let's Encrypt)
  - ConfigMaps and Secrets management
  - Resource quotas and limits
  - Basic monitoring setup

### Study Resources
- Kubernetes official documentation
- "Kubernetes in Action" by Marko Lukša
- KodeKloud Kubernetes course

---

## Week 7: AWS EKS & Advanced Kubernetes
**Theme**: Production Kubernetes

### Learning Objectives
- Deploy production-ready EKS clusters
- Master Helm package management
- Implement advanced networking
- Set up cluster autoscaling

### Technical Skills
- **EKS**: Cluster creation, node groups, IAM integration
- **Helm**: Charts, templates, values, releases
- **Networking**: AWS Load Balancer Controller, VPC CNI
- **Autoscaling**: Cluster Autoscaler, Horizontal Pod Autoscaler

### Hands-on Practice
- Provision EKS with Terraform
- Deploy applications using Helm charts
- Configure AWS Load Balancer Controller
- Implement cluster and pod autoscaling

### Deliverable
- **Project 4**: Production EKS Setup
  - EKS cluster with managed node groups
  - Custom Helm charts for applications
  - Automated scaling configuration
  - Cost optimization implementation
  - Disaster recovery procedures

### Study Resources
- AWS EKS documentation
- Helm documentation
- AWS containers blog

---

## Week 8: Monitoring & Observability
**Theme**: Visibility & Reliability

### Learning Objectives
- Implement comprehensive monitoring
- Set up centralized logging
- Create meaningful dashboards
- Define SLIs and SLOs

### Technical Skills
- **Metrics**: Prometheus, Grafana, custom metrics
- **Logging**: Fluentd/Fluent Bit, ELK stack, CloudWatch Logs
- **Tracing**: Basic distributed tracing concepts
- **Alerting**: AlertManager, PagerDuty, Slack integration

### Hands-on Practice
- Deploy Prometheus + Grafana on Kubernetes
- Configure application metrics collection
- Set up log aggregation and analysis
- Create operational dashboards
- Implement intelligent alerting

### Deliverable
- **Project 5**: Complete Observability Stack
  - Multi-cluster monitoring setup
  - Application and infrastructure dashboards
  - Log analysis and search capabilities
  - SLO-based alerting
  - Runbook automation

### Study Resources
- Prometheus documentation
- Google SRE books (free online)
- Grafana tutorials

---

## Week 9: Security & Compliance
**Theme**: Security-First DevOps

### Learning Objectives
- Implement DevSecOps practices
- Secure container and Kubernetes workloads
- Manage secrets effectively
- Ensure compliance

### Technical Skills
- **Container Security**: Image scanning, runtime security, admission controllers
- **Kubernetes Security**: Network policies, Pod Security Standards, OPA Gatekeeper
- **Secrets Management**: AWS Secrets Manager, HashiCorp Vault
- **Compliance**: CIS benchmarks, security scanning, audit logging

### Hands-on Practice
- Implement security scanning in CI/CD
- Deploy policy enforcement (OPA Gatekeeper)
- Set up secrets management workflow
- Configure security monitoring and alerting

### Deliverable
- **Project 6**: Secure Infrastructure Setup
  - Automated security scanning
  - Policy-as-code implementation
  - Secrets management integration
  - Security monitoring dashboard
  - Compliance reporting automation

### Study Resources
- OWASP Container Security Guide
- CIS Kubernetes Benchmark
- AWS security best practices

---

## Week 10: Advanced AWS & Multi-Environment
**Theme**: Production Architecture

### Learning Objectives
- Design resilient architectures
- Implement disaster recovery
- Optimize costs
- Manage multiple environments

### Technical Skills
- **Advanced AWS**: Lambda, API Gateway, CloudFront, Route53
- **Disaster Recovery**: Backup strategies, cross-region replication
- **Cost Optimization**: Right-sizing, reserved instances, spot instances
- **Multi-Region**: Global infrastructure, failover strategies

### Hands-on Practice
- Implement serverless components
- Set up disaster recovery procedures
- Create cost optimization recommendations
- Deploy multi-region architecture

### Deliverable
- **Project 7**: Enterprise Architecture
  - Multi-region, highly available setup
  - Disaster recovery with RTO/RPO metrics
  - Cost optimization report
  - Automated backup and restore procedures

### Study Resources
- AWS Well-Architected Framework
- AWS disaster recovery patterns
- AWS cost optimization guides

---

## Week 11: Certification & Portfolio Polish
**Theme**: Validation & Presentation

### Learning Objectives
- Complete AWS Solutions Architect Associate
- Obtain HashiCorp Terraform Associate
- Polish portfolio projects
- Create demonstration materials

### Activities
- **Certification Prep**: Practice exams, review weak areas
- **Portfolio Enhancement**: Clean up code, improve documentation
- **Demo Creation**: Record 3-5 minute project demonstrations
- **Case Studies**: Write problem-solution-results format

### Deliverables
- **AWS Solutions Architect Associate** certification
- **HashiCorp Terraform Associate** certification
- **Complete Portfolio**: 7 projects with excellent documentation
- **Demo Videos**: Professional project walkthroughs

### Study Resources
- Tutorials Dojo practice exams
- AWS and HashiCorp official practice tests
- Portfolio presentation best practices

---

## Week 12: Business Setup & Market Entry
**Theme**: Freelance Business Launch

### Learning Objectives
- Set up freelance business structure
- Create marketing materials
- Develop pricing strategies
- Network with potential clients

### Business Activities
- **Legal Setup**: Auto-entrepreneur registration, insurance
- **Marketing Materials**: LinkedIn profile, personal website, case studies
- **Pricing Strategy**: Hourly rates, project estimates, value propositions
- **Networking**: Join DevOps France, attend meetups, connect with agencies

### Deliverables
- **Business Registration**: Legal entity setup
- **Professional Website**: Portfolio + blog + contact
- **Service Offerings**: 3 packaged service templates
- **Proposal Templates**: Standard project proposals
- **Rate Card**: Pricing for different services

## Learning Resources & Materials

### Essential Documentation (Bookmark These)
**Must-read official docs to master each technology:**

#### Cloud & Infrastructure
- **AWS Documentation** - Focus on: EC2, VPC, IAM, S3, RDS, EKS, Lambda
- **AWS Certification SAA Guide** - Official exam guide + practice questions
- **HashiCorp Terraform Learn** - Step-by-step official tutorials (AWS + providers)
- **Kubernetes Documentation** (kubernetes.io) - Concepts & hands-on guides

#### CI/CD & GitOps  
- **GitHub Actions Documentation** - Workflow creation and best practices
- **Argo CD Documentation** - GitOps pattern implementation guides

#### Monitoring & Observability
- **Prometheus Documentation** - Metrics collection and alerting setup
- **Grafana Documentation** - Dashboard creation and visualization guides

### Hands-On Labs & Interactive Practice

#### Free Practice Platforms
- **AWS Skill Builder** - Official AWS labs and exam preparation
- **HashiCorp Learn** - Interactive Terraform tutorials with real environments
- **Kubernetes Official Tutorials** - kubernetes.io hands-on exercises
- **Play with Docker** - Free online Docker playground
- **Katacoda/O'Reilly** - Interactive DevOps scenarios

#### Premium Practice Environments
- **KodeKloud** - Excellent CKA/CKAD labs with real cluster access
- **A Cloud Guru** - AWS hands-on labs and cloud sandboxes  
- **Qwiklabs (Google Cloud Skills Boost)** - Multi-cloud lab environment
- **AWS Well-Architected Labs** - Production scenario practice

### Video Courses & Training

#### Free YouTube Resources
- **TechWorld with Nana** - Kubernetes, Docker, DevOps fundamentals
- **Stephane Maarek** - AWS certification preparation
- **FreeCodeCamp** - Complete DevOps course (12+ hours)
- **HashiCorp** - Official Terraform video tutorials
- **CNCF YouTube** - Cloud native technology deep dives

#### Premium Video Courses
- **Udemy Top Recommendations**:
  - "Ultimate AWS Certified Solutions Architect Associate 2024" - Stephane Maarek
  - "HashiCorp Certified: Terraform Associate 2024" - Zeal Vora
  - "Certified Kubernetes Administrator (CKA) with Practice Tests" - Mumshad Mannambeth
  - "Docker and Kubernetes: The Complete Guide" - Stephen Grider

- **Linux Academy / A Cloud Guru**:
  - AWS Solutions Architect path
  - DevOps Learning Path
  - Kubernetes Deep Dive

### Books & Written Resources

#### Essential DevOps Books
- **"Terraform: Up & Running"** - Yevgeniy Brikman (free online updates)
- **"Kubernetes in Action"** - Marko Lukša
- **"Site Reliability Engineering"** - Google (free online)
- **"The DevOps Handbook"** - Gene Kim
- **"Docker Deep Dive"** - Nigel Poulton

#### AWS Specific
- **"AWS Well-Architected Framework"** (free whitepaper)
- **"Amazon Web Services in Action"** - Manning Publications

### Certification Preparation Strategy

#### AWS Solutions Architect Associate
**Free Resources:**
- AWS official exam guide and sample questions
- AWS Skill Builder free courses
- AWS Well-Architected Framework

**Paid Resources:**
- **Stephane Maarek's Udemy course** (~€15-30, often on sale)
- **Tutorials Dojo Practice Exams** (~€15) - Essential for pass guarantee
- **A Cloud Guru AWS certification path** (~€29/month)

**Study Plan:** 6-8 weeks, 2-3 hours daily
1. Weeks 1-4: Video course + hands-on labs
2. Weeks 5-6: Practice exams + weak area review  
3. Weeks 7-8: Final review + exam scheduling

#### HashiCorp Terraform Associate  
**Free Resources:**
- HashiCorp Learn (complete free curriculum)
- Official Terraform documentation
- HashiCorp YouTube channel

**Paid Resources:**
- **Zeal Vora's Udemy course** (~€15-30)
- **A Cloud Guru Terraform course** (~€29/month)

**Study Plan:** 3-4 weeks, 1-2 hours daily
1. Week 1-2: HashiCorp Learn modules + hands-on
2. Week 3: Udemy course for exam-specific prep
3. Week 4: Practice exams + review

#### Certified Kubernetes Administrator (CKA)
**Free Resources:**
- Kubernetes official documentation
- Kubernetes tutorials on kubernetes.io
- CNCF free courses on edX

**Paid Resources:**
- **KodeKloud CKA course with labs** (~€20-40) - Highly recommended
- **Mumshad's Udemy course** (~€15-30)
- **Killer.sh practice exams** (included with CKA registration)

**Study Plan:** 8-10 weeks, 3-4 hours daily
1. Weeks 1-3: Core concepts + basic hands-on
2. Weeks 4-6: Advanced topics + cluster operations
3. Weeks 7-8: Intensive practice exams
4. Weeks 9-10: Killer.sh + final preparation

### Cost-Effective Learning Strategy

#### Free-First Approach (€0-50 total)
1. **Official documentation** - Always start here
2. **HashiCorp Learn** - Complete Terraform curriculum
3. **AWS Free Tier** - 12 months of hands-on practice
4. **YouTube tutorials** - TechWorld with Nana, FreeCodeCamp
5. **One premium practice exam** per certification

#### Balanced Investment (€150-300 total)
1. **3 Udemy courses** during sales (~€45)
2. **KodeKloud labs access** (~€40/year)
3. **Tutorials Dojo practice exams** (~€45)
4. **A Cloud Guru** (2-3 months, ~€87)
5. **Certification exam fees** (~€150 x 3 = €450)

### Weekly Resource Allocation Guide

#### Weeks 1-3: Foundation Building
- **70% hands-on practice** (local labs, AWS Free Tier)
- **20% documentation reading** (official docs)
- **10% video content** (YouTube tutorials)

#### Weeks 4-8: Deep Skills Development  
- **50% hands-on practice** (real projects)
- **30% structured learning** (Udemy courses, A Cloud Guru)
- **20% documentation** (best practices, advanced topics)

#### Weeks 9-11: Certification Focus
- **40% practice exams** (Tutorials Dojo, Killer.sh)
- **30% hands-on labs** (certification-specific scenarios)
- **20% review** (weak areas, documentation)
- **10% exam logistics** (scheduling, final prep)

#### Week 12: Portfolio & Business
- **60% portfolio polishing** (documentation, demos)
- **30% business setup** (legal, marketing materials)
- **10% networking** (community engagement)

### Community & Ongoing Support

#### French-Specific Communities
- **DevOps France** (Slack) - Active French DevOps community
- **AWS User Group France** - Monthly meetups in major cities
- **Kubernetes & Cloud Native Meetup** (Lyon, Paris, Nice)
- **HashiCorp User Group France**

#### Global Communities
- **r/devops** - Reddit community with daily discussions
- **CNCF Slack** - Cloud Native Computing Foundation
- **DevOps Chat** - Slack workspace for DevOps professionals
- **Stack Overflow** - Technical Q&A (tag: devops, aws, kubernetes)

### Money-Saving Tips
1. **Udemy sales** - Wait for frequent 85-90% discounts
2. **AWS credits** - Apply for startup credits if eligible
3. **Student discounts** - Many platforms offer education pricing
4. **Free tier maximization** - Use AWS, GCP, Azure free tiers strategically
5. **Group study** - Split costs on premium resources with study partners

### Progress Tracking Tools
- **Notion/Obsidian** - Knowledge base and progress tracking
- **GitHub** - Code repository and portfolio showcase
- **LinkedIn Learning** - Some courses available free with library card
- **Anki/Spaced repetition** - For memorizing AWS services and concepts

---

## Success Metrics & Tracking

### Weekly Checkpoints
- [ ] Technical skills assessment (hands-on tests)
- [ ] Project deliverable completion
- [ ] GitHub commit consistency
- [ ] Study hour tracking (target: 20-25h/week)

### Final Success Criteria
- [ ] 7 complete portfolio projects
- [ ] 2 cloud certifications obtained
- [ ] Professional online presence established
- [ ] First client proposal submitted
- [ ] Legal business structure in place

### Portfolio Structure
```
your-name-devops-portfolio/
├── README.md (professional overview)
├── projects/
│   ├── 01-docker-application/
│   ├── 02-ci-cd-pipeline/
│   ├── 03-terraform-infrastructure/
│   ├── 04-kubernetes-deployment/
│   ├── 05-eks-production/
│   ├── 06-observability-stack/
│   └── 07-security-implementation/
├── certifications/
├── case-studies/
└── demos/ (video links)
```

## Emergency Adjustments
If you fall behind:
- **Skip Week 10** advanced topics, focus on core skills
- **Combine Weeks 11-12** for faster business launch
- **Prioritize AWS certification** over Terraform initially
- **Focus on 5 strong projects** rather than 7 average ones

## Community & Support
- **DevOps France** (Slack community)
- **AWS User Groups** (Lyon, Nice)
- **Kubernetes meetups** (local and virtual)
- **HashiCorp User Groups**

Remember: Consistency beats perfection. Better to have solid fundamentals than incomplete advanced topics!