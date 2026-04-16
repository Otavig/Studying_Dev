class Tree {
    value: number;
    left: Tree | null = null;
    right: Tree | null = null;

    constructor(value: number) {
        this.value = value;
    }
}

class BinarySearchTree {
    root: Tree | null = null;
    list: number[] = [];

    insert(value: number): void {
        const newNode = new Tree(value);
        if(!this.root){
            this.root = newNode;
            console.log(`Nó ${value} inserido como raiz.`);
        } else {
            this.insertNode(this.root, newNode);
        } 
    }

    insertNode(node: Tree, newNode: Tree) {
        if(newNode.value < node.value) {
           if(!node.left) {
            node.left = newNode;
            console.log(`Nó ${newNode.value} inserido à esquerda de ${node.value}`);
           } else {
            this.insertNode(node.left, newNode);
           }
        } else {
            if(!node.right) {
                node.right = newNode;
                console.log(`Nó ${newNode.value} inserido à direita de ${node.value}`);
            } else {
                this.insertNode(node.right, newNode);
            }
        }
    }

    search(value: number): boolean {
        return this.searchNode(this.root, value);
    }

    private searchNode(node: Tree | null, value: number): boolean {
        if(!node) return false;
        if(value === node.value) return true;
        if(value < node.value) {
            return this.searchNode(node.left, value);
        } else {
            return this.searchNode(node.right, value);
        }
    }

    inOrderTraversal(node: Tree | null = this.root): number[] {
        if(node) {
            this.inOrderTraversal(node.left);
            this.list.push(node.value);
            this.inOrderTraversal(node.right);
        }

        return this.list;
    }
}

class BubbleSort {
    constructor() {
    }

    increasing(list: number[] = []): number[] {
        for (let i = 0; i < list.length - 1; i++) {
            for (let j = 0; j < list.length - 1 - i; j++) {
                if(list[j] > list[j + 1]) {
                    let temp: number = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = temp;
                }
            }  
        }

        return list;
    }

    descending(list: number[] = []): number[] {
        for (let i = 0; i < list.length - 1; i++) {
            for (let j = 0; j < list.length - 1 - i; j++) {
                if(list[j] < list[j + 1]) {
                    let temp: number = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = temp;
                }
            }  
        }
        return list;
    }
}

const bst = new BinarySearchTree();

bst.insert(10);
bst.insert(5);
bst.insert(15);
bst.insert(3);
bst.insert(7);

console.log("\n🔍 Busca de valores:");
console.log("Buscar 7:", bst.search(7)); // true
console.log("Buscar 12:", bst.search(12)); // false

console.log("\n📚 Percurso em ordem (crescente):");
let guard = bst.inOrderTraversal(); // 3, 5, 7, 10, 15
console.log(guard);

console.log("\n📚 Percurso em ordem (decrescente):");
console.log(new BubbleSort().descending(guard));