# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository Overview

This is a DevOps & Cloud Portfolio repository documenting a 12-week journey from software developer to DevOps Cloud Engineer. The owner is transitioning from C/C++ and web development to DevOps/Cloud technologies, with a focus on freelance consulting in France.

## Target Architecture

Based on the roadmap, this portfolio will demonstrate:
- **AWS-first approach** with Infrastructure as Code (Terraform)
- **Containerization** using Docker and Kubernetes (EKS)
- **CI/CD pipelines** with GitHub Actions
- **Monitoring stack** using Prometheus + Grafana
- **Security-first DevOps** practices

## Expected Project Structure

The roadmap indicates 7 main projects will be developed:
1. **Project 0**: Dockerized portfolio application (React/Node.js)
2. **Project 1**: Complete AWS Infrastructure with Terraform
3. **Project 2**: Complete CI/CD Pipeline with GitHub Actions
4. **Project 3**: Kubernetes Application Deployment
5. **Project 4**: Production EKS Setup
6. **Project 5**: Complete Observability Stack (Prometheus/Grafana)
7. **Project 6**: Secure Infrastructure Setup
8. **Project 7**: Enterprise Architecture (multi-region)

## Technology Stack

### Core Technologies
- **Infrastructure**: AWS, Terraform, Kubernetes (EKS)
- **Containerization**: Docker, Docker Compose
- **CI/CD**: GitHub Actions
- **Monitoring**: Prometheus, Grafana, AlertManager
- **Security**: OPA Gatekeeper, AWS Secrets Manager, container scanning

### Development Environment
- **OS**: macOS (Darwin 25.0.0)
- **Languages**: React/Node.js for portfolio applications
- **Version Control**: Git with GitHub

## Repository Conventions

### File Structure
Based on gitignore and roadmap, expect this structure:
```
├── projects/
│   ├── 01-docker-application/
│   ├── 02-ci-cd-pipeline/
│   ├── 03-terraform-infrastructure/
│   └── ...
├── terraform/ (with .terraform/, *.tfstate excluded)
├── kubernetes/ (with kubeconfig excluded)
├── docker/ (with .dockerignore excluded)
└── docs/
```

### Ignored Files
- Terraform state files and .terraform directories
- AWS credentials
- Kubernetes config files
- IDE configurations (.vscode/, .idea/)
- OS files (.DS_Store)

## Development Guidelines

### Security Practices
- Never commit AWS credentials or sensitive data
- Use AWS IAM roles and policies properly
- Implement least privilege access
- Scan container images for vulnerabilities

### Infrastructure as Code
- Use Terraform for all AWS infrastructure
- Implement multi-environment patterns (dev/staging/prod)
- Use remote state with S3 + DynamoDB
- Create reusable modules

### Documentation Standards
Each project should include:
- Project Overview with technical stack
- Architecture diagrams where applicable
- Setup & usage instructions
- Key learnings & challenges
- Links to resources & references

## Goals and Context

### Primary Objectives
- Build a portfolio demonstrating DevOps/Cloud skills
- Prepare for AWS Solutions Architect Associate certification
- Establish freelance DevOps consulting business
- Target French market (20-25 hours/week sustainable pace)

### Success Metrics
- Complete 7 portfolio projects with excellent documentation
- Obtain AWS and Terraform certifications
- Create professional demonstration materials
- Establish business structure for freelance work

## Common Commands

*Note: No package.json or Makefile found yet. Commands will be updated as projects are added.*

When projects are developed, expect commands like:
- `terraform plan/apply` for infrastructure
- `docker build/run` for containerization  
- `kubectl apply` for Kubernetes deployments
- `npm run build/test` for Node.js applications

## Notes for Claude Code

- This is an active learning portfolio - expect frequent additions and updates
- Focus on AWS best practices and French market requirements
- Prioritize clear documentation and professional presentation
- Consider cost optimization in all implementations (AWS Free Tier usage)
- Maintain security-first approach in all code and infrastructure