import pygame

class Number(pygame.sprite.Sprite):
    def __init__(self, surface, x, y):
        pygame.sprite.Sprite.__init__(self)
        self.image = surface
        self.rect = self.image.get_rect()
        self.rect.center = (x, y)
        self.dest = x, y

    def update(self):
        c = self.rect.center
        if c[0] > self.dest[0]:
            self.rect.x -= 1
        elif c[0] < self.dest[0]:
            self.rect.x += 1

        if c[1] > self.dest[1]:
            self.rect.y -= 1
        elif c[1] < self.dest[1]:
            self.rect.y += 1
        
    
