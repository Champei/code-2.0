window.addEventListener('scroll', function() {
    const header = document.querySelector('.header');
    if (window.scrollY > 50) {
        header.classList.add('scrolled');
    } else {
        header.classList.remove('scrolled');
    }
});

document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();
        
        const targetId = this.getAttribute('href');
        if (targetId === '#') return;
        
        const targetElement = document.querySelector(targetId);
        if (targetElement) {
            const headerHeight = document.querySelector('.header').offsetHeight;
            const targetPosition = targetElement.getBoundingClientRect().top + window.pageYOffset - headerHeight;
            
            window.scrollTo({
                top: targetPosition,
                behavior: 'smooth'
            });
        }
    });
});

const mobileMenuToggle = document.querySelector('.mobile-menu-toggle');
if (mobileMenuToggle) {
    mobileMenuToggle.addEventListener('click', function() {
        const navCenter = document.querySelector('.nav-center');
        const navRight = document.querySelector('.nav-right');
        
        if (navCenter.style.display === 'flex') {
            navCenter.style.display = 'none';
            navRight.style.display = 'none';
        } else {
            navCenter.style.display = 'flex';
            navRight.style.display = 'flex';
            
            navCenter.style.flexDirection = 'column';
            navRight.style.flexDirection = 'column';
            navCenter.style.position = 'absolute';
            navCenter.style.top = '100%';
            navCenter.style.left = '0';
            navCenter.style.width = '100%';
            navCenter.style.background = 'rgba(255, 255, 255, 0.95)';
            navCenter.style.backdropFilter = 'blur(10px)';
            navCenter.style.padding = '2rem';
            
            navRight.style.position = 'absolute';
            navRight.style.top = 'calc(100% + 200px)'; 
            navRight.style.left = '0';
            navRight.style.width = '100%';
            navRight.style.background = 'rgba(255, 255, 255, 0.95)';
            navRight.style.backdropFilter = 'blur(10px)';
            navRight.style.padding = '2rem';
        }
        
        this.classList.toggle('active');
    });
}

document.querySelectorAll('.btn-primary').forEach(button => {
    button.addEventListener('click', function() {
        alert('Redirecting to order page...');
    });
});

document.querySelectorAll('.btn-secondary').forEach(button => {
    button.addEventListener('click', function() {
        alert('Showing more information...');
    });
});

document.querySelectorAll('.vehicle-card').forEach(card => {
    card.addEventListener('mouseenter', function() {
        this.style.transform = 'translateY(-5px)';
    });
    
    card.addEventListener('mouseleave', function() {
        this.style.transform = 'translateY(0)';
    });
});

window.addEventListener('scroll', function() {
    const scrolled = window.pageYOffset;
    const hero = document.querySelector('.hero-image');
    if (hero) {
        hero.style.transform = `translateY(${scrolled * 0.5}px)`;
    }
});

const observerOptions = {
    threshold: 0.1,
    rootMargin: '0px 0px -50px 0px'
};

const observer = new IntersectionObserver(function(entries) {
    entries.forEach(entry => {
        if (entry.isIntersecting) {
            entry.target.classList.add('fade-in');
        }
    });
}, observerOptions);

document.querySelectorAll('section').forEach(section => {
    section.classList.add('fade-out');
    observer.observe(section);
});

const style = document.createElement('style');
style.textContent = `
    .fade-out {
        opacity: 0;
        transform: translateY(20px);
        transition: opacity 0.6s ease, transform 0.6s ease;
    }
    
    .fade-in {
        opacity: 1;
        transform: translateY(0);
    }
`;
document.head.appendChild(style);